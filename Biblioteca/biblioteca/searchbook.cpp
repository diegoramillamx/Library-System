#include "searchbook.h"
#include "ui_searchbook.h"

#include <QDebug>
#include <QSqlError>

SearchBook::SearchBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchBook) {
    ui->setupUi(this);

    libraryDatabase = QSqlDatabase::database();
    loadComboBoxCritery();
    searchOnDatabase();
    }

SearchBook::~SearchBook() {
    delete ui;
    }

void SearchBook::searchOnDatabase(const QString& value) {
    QSqlQuery query;
    QString critery(ui->cboCritery->currentText());
    query.exec(QString("SELECT EJEMPLARES.ID, ISBN, EDICION, TITULO, NUM_PAGINAS AS 'NÚMERO DE PÁGINAS', EDITORIALES.NOMBRE, "
                       "FORMATOS.DESCRIPCION AS 'FORMATO', GENEROS.NOMBRE AS 'GENEROS', group_concat(CONCAT(APELLIDO_PATERNO,' ', APELLIDO_MATERNO,' ',NOMBRE_PILA) SEPARATOR ', ') AS AUTOR, OCUPADO "
                       "FROM LIBROS INNER JOIN LIBRO_TIENE_AUTORES ON LIBROS.ISBN = LIBRO_TIENE_AUTORES.LIBRO_ISBN "
                       "INNER JOIN EDITORIALES ON LIBROS.EDITORIAL_ID = EDITORIALES.ID INNER JOIN FORMATOS ON FORMATOS.ID = LIBROS.FORMATO_ID "
                       "INNER JOIN GENEROS ON GENEROS.ID = LIBROS.GENERO_ID INNER JOIN AUTORES ON AUTORES.ID = LIBRO_TIENE_AUTORES.AUTOR_ID "
                       "INNER JOIN EJEMPLARES ON LIBROS.ISBN = EJEMPLARES.LIBRO_ISBN WHERE %1 LIKE '%%2%' "
                       "group by ejemplares.id, libros.isbn order by titulo, ejemplares.id;").arg(getRealValueOfCritery(critery)).arg(value));
    qDebug() << query.lastError().text();
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query);
    ui->tvQuery->setModel(model);
    }

void SearchBook::loadComboBoxCritery()  {
    ui->cboCritery->addItem("ISBN");
    ui->cboCritery->addItem("Titulo");
    ui->cboCritery->addItem("Autor");
    ui->cboCritery->addItem("Editorial");
    ui->cboCritery->addItem("Género");
    ui->cboCritery->addItem("Edición");
    }

QString SearchBook::getRealValueOfCritery(const QString& value) {
    if (value == "ISBN") return "LIBROS.ISBN";
    else if (value == "Titulo") return "LIBROS.TITULO";
    else if (value == "Autor") return "CONCAT(APELLIDO_PATERNO,' ', APELLIDO_MATERNO,' ',NOMBRE_PILA)";
    else if (value == "Editorial") return "EDITORIALES.NOMBRE";
    else if (value == "Género") return "GENEROS.NOMBRE";
    else return "LIBROS.EDICION";
    }


void SearchBook::on_lneSearch_textChanged(const QString &value) {
    searchOnDatabase(value);
    }

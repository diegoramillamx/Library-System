#include "loanreport.h"
#include "ui_loanreport.h"

LoanReport::LoanReport(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoanReport) {
    ui->setupUi(this);

    libraryDatabase = QSqlDatabase::database();
    queryNoFinished();
    }

LoanReport::~LoanReport() {
    delete ui;
    }

void LoanReport::whenRadiosChange() {
    if (ui->rbFinished->isChecked()) {
        queryFinished();
        }
    else {
        queryNoFinished();
        }
    }

void LoanReport::queryNoFinished() {
    QSqlQuery query;
    query.prepare("SELECT PRESTAMOS.ID AS 'ID PRESTAMOS', EJEMPLAR_ID AS 'EJEMPLAR', EJEMPLAR_ISBN 'ISBN', TITULO, PRESTAMOS.FECHA_INICIO 'INICIO DE PRESTAMO', "
                  "PRESTAMOS.FECHA_FIN as 'FIN DE PRESTAMO', CODIGO AS 'CÓDIGO DE ESTUDIANTE', CONCAT(APELLIDO_PATERNO,' ',APELLIDO_MATERNO,' ',NOMBRE_PILA) AS 'ESTUDIANTE', "
                  "CIUDAD, TELEFONO, EDITORIALES.NOMBRE as EDITORIAL, FORMATOS.DESCRIPCION AS FORMATO, GENEROS.NOMBRE AS GÉNERO, EJEMPLARES.OCUPADO "
                  "FROM PRESTAMOS INNER JOIN USUARIOS ON PRESTAMOS.USUARIO_CODIGO = USUARIOS.CODIGO "
                  "INNER JOIN EJEMPLARES ON (EJEMPLARES.ID = PRESTAMOS.EJEMPLAR_ID AND EJEMPLARES.LIBRO_ISBN = PRESTAMOS.EJEMPLAR_ISBN) "
                  "INNER JOIN LIBROS ON PRESTAMOS.EJEMPLAR_ISBN = LIBROS.ISBN "
                  "INNER JOIN EDITORIALES ON EDITORIALES.ID = LIBROS.EDITORIAL_ID "
                  "INNER JOIN FORMATOS ON FORMATOS.ID = LIBROS.FORMATO_ID "
                  "INNER JOIN GENEROS ON GENEROS.ID = LIBROS.GENERO_ID WHERE "
                  "datediff(CURDATE(), PRESTAMOS.FECHA_INICIO)  <= 7 AND OCUPADO = 1 AND TERMINADO = 1");
    query.exec();
    QSqlQueryModel *tableModel = new QSqlQueryModel;
    tableModel->setQuery(query);
    ui->tvQuery->setModel(tableModel);
    }

void LoanReport::queryFinished() {
    QSqlQuery query;
    query.prepare("SELECT PRESTAMOS.ID AS 'ID PRESTAMOS', EJEMPLAR_ID AS 'EJEMPLAR', EJEMPLAR_ISBN 'ISBN', TITULO, PRESTAMOS.FECHA_INICIO 'INICIO DE PRESTAMO', "
                  "PRESTAMOS.FECHA_FIN as 'FIN DE PRESTAMO', CODIGO AS 'CÓDIGO DE ESTUDIANTE', CONCAT(APELLIDO_PATERNO,' ',APELLIDO_MATERNO,' ',NOMBRE_PILA) AS 'ESTUDIANTE', "
                  "CIUDAD, TELEFONO, EDITORIALES.NOMBRE as EDITORIAL, FORMATOS.DESCRIPCION AS FORMATO, GENEROS.NOMBRE AS GÉNERO, EJEMPLARES.OCUPADO "
                  "FROM PRESTAMOS INNER JOIN USUARIOS ON PRESTAMOS.USUARIO_CODIGO = USUARIOS.CODIGO "
                  "INNER JOIN EJEMPLARES ON (EJEMPLARES.ID = PRESTAMOS.EJEMPLAR_ID AND EJEMPLARES.LIBRO_ISBN = PRESTAMOS.EJEMPLAR_ISBN) "
                  "INNER JOIN LIBROS ON PRESTAMOS.EJEMPLAR_ISBN = LIBROS.ISBN "
                  "INNER JOIN EDITORIALES ON EDITORIALES.ID = LIBROS.EDITORIAL_ID "
                  "INNER JOIN FORMATOS ON FORMATOS.ID = LIBROS.FORMATO_ID "
                  "INNER JOIN GENEROS ON GENEROS.ID = LIBROS.GENERO_ID WHERE "
                  "datediff(CURDATE(), PRESTAMOS.FECHA_INICIO)  >= 8 AND OCUPADO = 1 AND TERMINADO = 1");
    query.exec();
    QSqlQueryModel *tableModel = new QSqlQueryModel;
    tableModel->setQuery(query);
    ui->tvQuery->setModel(tableModel);
    }


void LoanReport::on_rbFinished_clicked() {
    whenRadiosChange();
    }

void LoanReport::on_rbNoFinished_clicked() {
    whenRadiosChange();
    }

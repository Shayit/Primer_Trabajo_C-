#include <iostream>
#include <string>
using namespace std;

void llamado() {
    cout << "Opciones: " << endl;
    cout << "1. Comprar." << endl;
    cout << "2. Ajuste inventario (solo administradores)." << endl;
    cout << "3. Salir." << endl;
}

int main()
{
    int code[100] = { 001,002,003,004,005,006,007,010,011,012,013,014,015,016,017,020,021,022,023,024,025,026,027,030,031,032,033,034,035,036,037,040,041,042,043,044,045,045,
    046,047,050,051,052,053,054,055,056,057,060,061,062,063,064,065,066,067,070,071,072,073,074,075,076,077,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
    128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146 };

    int precio[100] = { 100,200,400,600,800,1000,1200,1400,1600,1800,2000,2200,2400,2600,2800,3000,3200,3400,3600,3800,4000,4200,4400,4800,5000,5200,5400,5600,5800,6000,6200,6400,
    6600,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600,8800,9000,9200,9400,9600,9800,10000,150,250,350,450,550,650,750,850,950,1050,1150,1250,1350,1450,1550,1650,1750,1850,1950,
    2050,2150,2250,2350,2450,2550,2650,2750,2850,2950,3050,3150,3250,3350,3450,3550,3650,3750,3850,3950,4050,4150,4250,4350,4450,4550,4650,4750,4850,4950,5050 };

    int cantidad[100] = { 50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
    50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50 };

    string name[100] = { "Arepas_blancas","Arepas_amarillas","Arepas_chocolo","Arepas caseras","Leche_descremada","Leche_entera","Leche_deslactosada","Leche_semidescremada","Leche_semideslactosada","Yogourt"
    ,"kumis_fresa","kumis_mora","kumis_melocoton","CocaCola_sin_azucar","CocaCola_tradicional","Soda","Manzana_personal","Colombiana","Sprite","Big_Cola","Quaker_pasas","Quaker_chocolate",
    "Quaker_griego","Galletas_de_chocolate","Galletas_con_mani","Mani_salado","Mani_con_frutos_secos","Mani_con_pasas","DeTodito_BBQ","DeTodito_Mixto","DeTodito_Natural","Doritos","Cheeto","NatuChips_Natural",
    "NatuChips_limon","Boliquesos","Frunas","Chocolate_Jumbo","Chocolate_Jumbo_con_mani","BomBonBum","Trident","Shampoo_anticaspa","Savital","Sobre_ponds","Paquete_pasteles_arequipe","Paquete_pasteles_arequipe_con_guayaba","paquete_pasteles_guayaba",
    "Paquete_pasteles_queso","Panela","Arroz_Roa","Arroz_Diana","Arroz_Caribe","Frijoles","Lentejas","Paquete_maduros","Paquete_verdes","Paquete_manzanas","Paquete_peras","Paquetes_yucas","Paquete_moras",
    "Granola","Cereal_chocolate","Zucaritas","FrootLoops","Pan_integral","Pan","Pan tajado","Pan_con_cereal","avena_hojuelas","avena_molida","Jalea_negra","gelatina","gelatina_blanca","maquina_afeitar","Caja_perniles",
    "Caja_muslos","caja_alas_bbq","mantequilla","salchica","salchicha_ranchera","salchica_zenu","salchichon","mortadela","queso_mozarella","quesito","queso_costeno","paquete_lenguas","paquete_cucas","sobre_desodorante",
    "caja_huevos_30","caja_huevos_15","gel_peinar","gomina","paquete_papas","paquete_papas_criollas","pescado","atun","tostacos","maizitos","yogourt_griego" };

    int p = 1, x, calculo, aux, a = 0, z = 1, co, recibe, fac = 0, cc = 0, id = 0, caja = 1, cho = 0, r = 1, ajuste = 0, final = 1, error = 0, ii = 0;
    string caj, people, descrip, cajero, admin, clave;
    char resp;

    //for (int i = 98; i < c;i++) {
        //cout << "Ingrese codigo: "; cin >> code[i];
        //cout << "Ingrese id producto: "; cin >> name[i];
        //cout << "Ingrese precio: "; cin >> precio[i];
        //cout << endl;
    //}
    while (r == 1) {
        llamado();
        cout << "\nDigite la opcion: "; cin >> cho;
        switch (cho) {
        case 1:
            system("cls");
            cout << "---Comprar---";
            cout << "\n\n**Cajeros** " << endl;
            cout << "1. Jerson G.";
            cout << "\n2. Santiago Z.";
            cout << "\nDigite el codigo del cajero: "; cin >> co;
            while (z == 1) {
                if (co == 1) {
                    system("cls");
                    cout << "--Cajero seleccionado: Jerson G.--";
                    caj = "Jerson G.";
                    cout << endl;
                    z = 0;
                }
                else if (co == 2) {
                    system("cls");
                    cout << "--Cajero seleccionado: Santiago Z.--";
                    caj = "Santiago Z.";
                    cout << endl;
                    z = 0;
                }
                else {
                    cout << "\nCodigo no registrado, intentalo nuevamente: "; cin >> co;
                }
            }
            p = 1;
            final = 1;
            a = 0;
            cout << endl;
            cout << "--Toma de datos--";
            cout << "\nIngrese su nombre: "; cin >> people;
            cout << "Ingrese id de documento: "; cin >> cc;

            while (p == 1) {
                cout << "\nIngrese el producto a facturar: "; cin >> recibe;
                if (recibe >= 1 && recibe <= 146) {
                    for (int i = 0; i < 100; i++) {
                        if (recibe == code[i] && cantidad[i] >= 1 && a == 0) {
                            cout << "Code: " << code[i] << "|  |nombre: " << name[i] << " |  |precio: $" << precio[i] << " |  |cantidad: " << cantidad[i] << "|  " << endl;
                            cout << "------------------------------------------------------------------------";
                            cout << "\nIngrese las unidades a facturar: "; cin >> x;
                            calculo = precio[i] * x;
                            aux = cantidad[i];
                            aux -= x;
                            cantidad[i] = aux;
                            fac += 1;
                            system("cls");
                            //cout << "Total de la compra: $" << calculo;
                            //cout << "\nCantidad restante del producto: " << cantidad[i];
                            cout << endl;
                            cout << endl;
                            cout << "****************************" << endl;
                            cout << "            ****" << endl;
                            cout << "*     NIT: 800.000.000" << "     " << endl;
                            cout << "*   Factura de venta F-" << fac << "   " << endl;
                            cout << "*                          " << endl;
                            cout << "*     --Vendedor--           " << endl;
                            cout << "*   Cajero: " << caj << "   caja: " << co << endl;
                            cout << "*     --Datos cliente--        " << endl;
                            cout << "*   Nombre: " << people << "               " << endl;
                            cout << "*   CC: " << cc << "                  " << endl;
                            cout << "*     --Datos de compra--      " << endl;
                            cout << "*   Producto: " << code[i] << " -- " << name[i] << "             " << endl;
                            cout << "*   unidades: " << x << "            " << endl;
                            cout << "*   TOTAL: $" << calculo << "               " << endl;
                            cout << "            ****";
                            cout << endl << "****************************";
                            cout << endl;

                            cout << "\n\nDesea consultar otro codigo? (S o N): "; cin >> resp;
                            if (resp == 'S' || resp == 's') {
                                cout << endl;
                                system("cls");
                            }
                            else if (resp == 'N' || resp == 'n') {
                                cout << "\nNos vemos pronto." << endl;
                                a = 1;
                                p = 0;
                                system("cls");
                            }
                            else {
                                cout << "Respuesta no reconocida, ingrese al menu nuevamente.";
                                a = 1;
                                p = 0;
                                system("cls");
                            }
                        }
                        else if (recibe == code[i] && cantidad[i] <= 1) {
                            cout << "Stock insuficiente, intente nuevamente." << endl << endl;
                            recibe = 0;
                        }
                    }
                }
                else if (recibe <= 0) {
                    cout << "Los productos son de codigo positivo, intentelo nuevamente. " << endl << endl;
                }
                else {
                    cout << "El codigo maximo es 146, prueba nuevamente." << endl << endl;
                }
            }
            break;
        case 2:
            system("cls");
            cout << "---Ajuste de inventario---";
            cout << "\n\nIngrese usuario administrador: "; cin >> admin;
            cout << "Ingrese clave: "; cin >> clave;
            while (admin != "mondon" || clave != "go123") {
                cout << "Usuario y/o clave incorrecta, pruebe nuevamente." << endl;
                cout << "\nIngrese usuario administrador: "; cin >> admin;
                //unsolvedWord(clave);
                cout << "Ingrese clave: "; cin >> clave;
            }


            cout << "----------Bienvenido administrador----------\n";

            while (error == 0) {
                cout << "Ingrese el codigo de producto a ajustar: "; cin >> recibe;
                for (int i = 0; i < 100; i++) {
                    if (recibe == code[i]) {
                        cout << "Producto: " << name[i] << "  unidades: " << cantidad[i] << endl;
                    }
                }
                if (recibe >= 1 && recibe <= 146) {
                    while (final == 1) {
                        cout << "\n1. Aumentar inventario.";
                        cout << "\n2. Restar inventario.";
                        cout << "\nDigite opcion: "; cin >> ajuste;
                        cout << endl;
                        switch (ajuste) {
                        case 1:
                            cout << "Ingrese la cantidad de unidades a ingresar: "; cin >> x;
                            for (int i = 0; i < 100; i++) {
                                if (recibe == code[i]) {
                                    aux = cantidad[i];
                                    aux += x;
                                    cantidad[i] = aux;
                                    cout << "\nCantidad actual: " << cantidad[i] << endl << endl;
                                    error = 1;
                                }
                            }
                            final = 0;
                            break;
                        case 2:
                            while (ii == 0) {
                                cout << "Ingrese la cantidad de unidades a restar: "; cin >> x;
                                for (int i = 0; i < 100; i++) {
                                    if (recibe == code[i]) {
                                        if (x > cantidad[i]) {
                                            cout << "El producto tiene menos unidades que las que deseas retirar, intentalo nuevamente.\n\n";
                                        }
                                        else {
                                            aux = cantidad[i];
                                            aux -= x;
                                            cantidad[i] = aux;
                                            cout << "Cantidad actual: " << cantidad[i] << endl << endl;
                                            error = 1;
                                            ii = 1;
                                        }
                                    }
                                }
                            }
                            final = 0;
                            break;
                        default:
                            cout << "Opcion no valida" << endl;
                            break;
                        }
                    }
                }
                else {
                    cout << "El codigo no es valido, pruebe nuevamente.\n\n";
                }
            }
            break;
        case 3:
            cout << "\nNos vemos pronto.\n";
            r = 0;
            break;
        default:
            cout << "El codigo no es valido.\n\n";
            break;
        }
    }
    return 0;
}
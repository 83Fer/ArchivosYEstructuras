#define TAMANIO 100
#define PRESTAMOS 100000

typedef struct{
	int codigo;
	char titulo[81];
	char autor[51];
	int DNI;
	int alquilado;//0 no // 1 si
	int prestados;

}Producto;

//Archivos
void cargarDatos(FILE*, Producto[]);
void guardarDatos(FILE*, Producto[]);

//inicializa (legajo, codigo, auxiliares)
void inicializarArray(int[], int);
void inicializarCodigo(Producto[], int);
void inicializarAlquilado(Producto[], int);
void inicializarPrestados(Producto[], int);
void inicializarDNI(Producto[], int);

//opciones
void altas(Producto[], int[]);
void modificar(Producto[], int[]);
void baja(Producto[], int[]);
void alquilar(Producto[], int[]);
void devolucion(Producto[], int[]);
void informar(Producto[]);
void listar(Producto[]);

//ingreso de datos

int pedirNumero(char[]);

void pedirCadena(char[],char[]);

float pedirImporte(char[] );


//validaciones
int validar_codigo(int);

int validar_repeticion(int[],int);

int validar_cantidad(int);

int validar_cadena(char[], int);

int validar_existeCodigo(int[], int);

//funcion Promedio

void tipoEstado(Producto[], int);

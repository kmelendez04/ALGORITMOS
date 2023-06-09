#include <iostream>
#include <vector>
using namespace std;


//ORDENAMIENTO

//Bubble sort compara cada elemento de la lista con el siguiente, intercambiándolos de posición si están en el orden equivocado.
void bubble() {
    vector<int> vec;  //Se crea un vector para almacenar los elementos ingresados.
    cout<<"ingrese tamaño vector"<<endl;  //Solicita al usuario que ingrese el tamaño del vector.
    int n;  
    cin>>n; // Lee el tamaño del vector
    cout<<"ingrese los elementos del vector"<<endl;// Solicita al usuario que ingrese los elementos del vector.
    for (int i=0; i<n; i++){
        cout<<"ingrese elemento "<<i<<endl;
        int elemento;
        cin>> elemento;
        vec.push_back(elemento);// Agrega el elemento al final del vector.
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {// Compara dos elementos adyacentes.
                int temp = vec[j];// Guarda temporalmente el elemento actual.
                vec[j] = vec[j + 1];// Reemplaza el elemento actual con el siguiente.
                vec[j + 1] = temp;// Reemplaza el siguiente elemento con el elemento guardado.
            }
        }
    }
    for (int k=0; k<n;k++){    // Imprime los elementos ordenados del vector.
        cout<<vec[k]<<",";
    }
    cout<<endl;
}


//Insert Sort toma uno por uno los elementos de un arreglo y lo recorre con respecto a los anteriormente ordenados. 
//Así empieza con el segundo elemento y lo ordena con respecto al primero, así sucesivamente hasta recorrer todas las posiciones.

void insertSort() {
    vector<int> vec;//Se crea un vector para almacenar los elementos ingresados.
    cout<<"ingrese tamaño vector"<<endl;// Solicita al usuario que ingrese el tamaño del vector.
    int n;
    cin>>n; // Lee el tamaño del vector 

    cout<<"ingrese los elementos del vector"<<endl;
    for (int i=0; i<n; i++){
        cout<<"ingrese elemento "<<i<<endl;// Solicita al usuario que ingrese el elemento en la posición i.
        int elemento;
        cin>> elemento;
        vec.push_back(elemento);// Agrega el elemento al final del vector.
    }
    
    for (int i = 1; i < n; i++) {
        int x = vec[i];
        int j = i - 1;// Inicializa un índice para comparar con elementos anteriores.
        while (j >= 0 && vec[j] > x) { // Mientras existan elementos anteriores y sean mayores que x.
            vec[j + 1] = vec[j];// Desplaza el elemento hacia la derecha.
            j--;
        }
        vec[j + 1] = x; // Inserta el elemento x en la posición correcta.
    }
    for (int k=0; k<n;k++){// Imprime el elemento en la posición k.
        cout<<vec[k]<<",";
    }
    cout<<endl;
}




//Selection sort Buscar el mínimo elemento de la lista, lo intercambia por el primero
//busca el siguiente mínimo en el resto de la lista y lo intercambia con el segundo y asi sucesivamente

void selectSort(){
    vector<int> vec;//Se crea un vector para almacenar los elementos ingresados.
    cout<<"ingrese tamaño vector"<<endl;// Solicita al usuario que ingrese el tamaño del vector.
    int n;
    cin>>n; // Lee el tamaño del vector 

    cout<<"ingrese los elementos del vector"<<endl;
    for (int i=0; i<n; i++){
        cout<<"ingrese elemento "<<i<<endl;// Solicita al usuario que ingrese el elemento en la posición i.
        int elemento;
        cin>> elemento;
        vec.push_back(elemento);// Agrega el elemento al final del vector.
    }
    for(int x=0;x<vec.size();x++){ //recorre cada elemento del vector.
        int iPos=-1;    //Variable para almacenar la posición del elemento más pequeño.
        int t=0;
        for (int y=x+1;y<vec.size();y++){
            if (vec[x]>vec[y]){ //Compara el elemento actual con el elemento en la posición y.
                iPos=y; // Almacena la posición del elemento más pequeño encontrado.
            }
            if(iPos>0){ // Si se encontró un elemento más pequeño, se realiza el intercambio.
                t= vec[iPos];
                vec[iPos]=vec[x];
                vec[x]=t;
            }
        }
    }
for (int x=0;x<vec.size();x++){  // Imprime los elementos ordenados del vector.
    cout<<vec[x]<<",";
    }
    cout<<endl;
}




//consiste en dividir el vector en intervalos de varios elementos 
//para organizarlos después por medio de insert sort

void shellSort() {
    vector<int> vec;//Se crea un vector para almacenar los elementos ingresados.
    cout<<"ingrese tamaño vector"<<endl;// Solicita al usuario que ingrese el tamaño del vector.
    int n;
    cin>>n; // Lee el tamaño del vector 

    cout<<"ingrese los elementos del vector"<<endl;
    for (int i=0; i<n; i++){
        cout<<"ingrese elemento "<<i<<endl;// Solicita al usuario que ingrese el elemento en la posición i.
        int elemento;
        cin>> elemento;
        vec.push_back(elemento);// Agrega el elemento al final del vector.
    }

    int intervalo = n / 2; // Define el intervalo inicial para comparar elementos.
    while (intervalo > 0) {
        for (int i = intervalo; i < n; i++) {
            int temp = vec[i];  // Almacena temporalmente el elemento en la posición i.
            int j = i;
            while (j >= intervalo && vec[j - intervalo] > temp) { // Desplaza los elementos mayores que temp hacia la derecha
                vec[j] = vec[j - intervalo];
                j -= intervalo;
            }
            vec[j] = temp; // Inserta el elemento temp en su posición correcta.
        }
        intervalo /= 2; // Reduce el intervalo a la mitad de nuevo
    }
    for (int i = 0; i < n; i++) { // Imprime los elementos ordenados del vector.
        cout << vec[i] << ",";
    }
    cout << endl;
}


//BUSQUEDA


//consiste en recorrer un vector desde el primer elemento hasta el último 
//y comprobar si alguno de los elementos contiene el vector buscado
void secuencial (){
    vector<int> vec;//Se crea un vector para almacenar los elementos ingresados.
    cout<<"ingrese tamaño vector"<<endl;// Solicita al usuario que ingrese el tamaño del vector.
    int n;
    cin>>n; // Lee el tamaño del vector 

    cout<<"ingrese los elementos del vector"<<endl;
    for (int i=0; i<n; i++){
        cout<<"ingrese elemento "<<i<<endl;// Solicita al usuario que ingrese el elemento en la posición i.
        int elemento;
        cin>> elemento;
        vec.push_back(elemento);// Agrega el elemento al final del vector.
    }
    cout<<endl;
    cout<<"que elemento quiere buscar?"<<endl;
    int j;
    cin>>j; //Lee el elemento a buscar 
    
    bool flag= false;
    for (int i=0;i<n;i++){
        if (j==vec[i]){ // Compara el elemento buscado con cada elemento del vector
            flag=true;  //cambia la bandera a verdadera cuando se encuentra el numero
            cout<<"valor encontrado en la posicion "<<i<<endl;
        }
        else if (flag==false && i==n-1){
        cout<<"valor no encontrado"<<endl;
        }
        
    }
}



//consiste en ir dividiendo el arreglo en mitades. (EL VECTOR DEBE ESTAR ORDENADO)
void binaria(){
vector<int> vec;//Se crea un vector para almacenar los elementos ingresados.
    cout<<"ingrese tamaño vector"<<endl;// Solicita al usuario que ingrese el tamaño del vector.
    int n;
    cin>>n; // Lee el tamaño del vector 

    cout<<"ingrese los elementos del vector"<<endl;
    for (int i=0; i<n; i++){
        cout<<"ingrese elemento "<<i<<endl;// Solicita al usuario que ingrese el elemento en la posición i.
        int elemento;
        cin>> elemento;
        vec.push_back(elemento);// Agrega el elemento al final del vector.
    }
    cout<<endl;
    cout<<"que elemento quiere buscar?"<<endl;
    int j;
    cin>>j; //Lee el elemento a buscar


    int izquierda = 0; // Índice izquierdo del rango de búsqueda.
    int derecha = vec.size() - 1; // Índice derecho del rango de búsqueda.
    bool flag = false;

    for (int i = (izquierda + derecha) / 2; izquierda <= derecha; i = (izquierda + derecha) / 2) { //se establece el punto medio, 
    //se ejecutará mientras el índice izquierdo sea menor o igual al índice derecho, se calcula de nuevo el medio del rango actual
        if (vec[i] == j) {
            cout << "El elemento fue encontrado en la posición " << i << " del vector." << endl;
            flag = true;
            break;
        } else if (vec[i] < j) {
            izquierda = i + 1; // El elemento está en la mitad derecha
        } else {
            derecha = i - 1; // El elemento está en la mitad izquierda
        }
    if (flag == false && i == n - 1) {
        cout << "Valor no encontrado" << endl;
    }
}
}





void indexada (){
    vector<int> vec;//Se crea un vector para almacenar los elementos ingresados.
    cout<<"ingrese tamaño vector"<<endl;// Solicita al usuario que ingrese el tamaño del vector.
    int n;
    cin>>n; // Lee el tamaño del vector 

    cout<<"ingrese los elementos del vector"<<endl;
    for (int i=0; i<n; i++){
        cout<<"ingrese elemento "<<i<<endl;// Solicita al usuario que ingrese el elemento en la posición i.
        int elemento;
        cin>> elemento;
        vec.push_back(elemento);// Agrega el elemento al final del vector.
    }
    cout<<endl;
    cout<<"que elemento quiere buscar?"<<endl;
    int j;
    cin>>j; //Lee el elemento a buscar

    int indice = -1; // Variable para almacenar el índice del elemento encontrado, inicializado en -1.
    for (int i = 0; i < n; i++) {
        if (vec[i] == j) {
            indice = i; // Actualiza el índice con la posición del elemento encontrado.
            break; // Se detiene la búsqueda una vez que se encuentra el elemento.
        }
    }

    if (indice != -1) {
        cout << "El elemento fue encontrado en la posición " << indice << " del vector." << endl;
    } else {
        cout << "El elemento no fue encontrado en el vector." << endl;
    }
}


int main() {
    int opcion;
    do{
        cout<<"1. Bubble Sort"<<endl;
        cout<<"2. Insert Sort"<<endl;
        cout<<"3. Select Sort"<<endl;
        cout<<"4. Shell Sort"<<endl;
        cout<<endl;
        cout<<"5. Busqueda Secuencial"<<endl;
        cout<<"6. Busqueda Binaria"<<endl;
        cout<<"7. Busqueda Indexada"<<endl;
        
        cin>>opcion;
        
    switch(opcion)
    {
        case 1:{
        bubble();
        break;
    }
        case 2:{
        insertSort();
        break;
    }
        case 3:{
        selectSort();
        break;
    }
        case 4:{
        shellSort();
        break;
    }
        case 5:{
        secuencial();
        break;
    }
        case 6:{
        binaria();
        break;
    }
        case 7:{
        indexada();
        break;
    }
        
}

}while (opcion!=7);
return 0;
}
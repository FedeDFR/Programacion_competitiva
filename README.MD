
# Resumen de algoritmos y estructuras para ICPC

## Indice

1. [Compilación](#compialción)

2. [Macros](#macros)
    
3. [Estructuras](#estructuras)

    3.1 [String](#strings)

    3.2 [Vectores](#vectores)

4. [Algoritmos](#algoritmos)

    4.1 [DFS](#dfs)

    4.2 [BFS](#bfs)



## Compilación

Vamos a compilar con g++:

`flasgs g++ -O2 -Wall -Wextra -std=c++17 "file.cpp"
g++ -Wall -std=c++17 "fiel.cpp"`

Luego lo ejecutamos con:

`./a.out`

e ingreso los input que me hagan falta.



## Macros

Estos son los macros:

``` c++

#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) (ll)x.size()
#define fst first
#define snd second 
#define all(x) x.begin(),x.end()
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
typedef long long ll;
typedef pair<int,int> ii;


int main () {
    REGALO;
    ll t;
    cin >> t;
    
    while(t--){
    }
}

```

## Estructuras

### Strings 

```c++
string s="Hola mundo ";
string t = "ANA";
string a = s + t ;          //concatena

char c,s; cin >> c>>s;
cout << int (c-'a') <<  "\n"
cout << char('a'+15) << "\n";  //devuelve la posicion en ascii de c - el valor en ascii de 'a', despues imprime el char 'p'
```

### Vectores

* Crea un vector:

    ```c++
    vector <int> v;
    ```
* Agrega el elemento x al final del vector:
    ```c++
    v.push_back(x);
    ```
* Elimina el elemento x:
    ```c++
    v.pop_back(x);
    ```
* Tamaño del vector:
    ```c++
    v.size();
    ```
* Ordena el vector con complejidad O(n*log(n)):
    ```c++
    sort(v.begin(), v.end());
    ```
* Devuelve la posicion del menor elemento mayor a p:
    ```c++
    lower_bound(a.begin(), a.end(), p) - a.begin();
    ```
* Ciclo con vectores:
    ```c++
    for(auto i:v){
            cout << i << "";    //imprime los elementos del arreglo
        }
    ```

### Set

* Crea un set:
    ```c++
    set<ll> st;
    ```
* Insertamos un elemento en el conjunto, si hay varios no los agrega repetidos:
    ```c++
    st.insert(x);
    ```
* Elimino el elemnto x del set:
    ```c++
    st.erase(x);
    ```
+ Pregunta si x esta en el conjunto:
    ```c++
    st.count(x)
    ```

Todas las funciones son de orden O(log(n))

-----------------------------/ Funciones con flotantes /-----------------------------


https://www.programacionfacil.org/cursos/c++/capitulo-19-funciones-matematicas.html


-----------------------------/ Formulas y funciones/-----------------------------


-Division techo para int a, b; [a/b]:    (a+b-1)/b

-Array de sumas parciales a[n]:    sum[n] = sum[n-1]+a[n]     donde sum[0] = 0 
    para calcular la suma entre un a[l] y a[r] siendo l<r:   sum[r+1]-sum[l]

-Ordenar un Array a[n]: sort(a, a+n)

-Devuelve puntero del primer elementomayor igual a x de un a[n] ordenado: lower_bound(a, a+n, x)
    Con Vectores: lower_bound(v.begin(), v.end(), x)
    Para que te de el indice tendrias que hacer incide = lower_bound(a, a+n, x) - a;
    Con Vectores: indice = lower_bound(v.begin(), v.end(), x) - v.begin();

    Si devuelve un indice fuera de rango no existe un elemento mayor o igual

-La función memset copia el valor de c (convertido a un unsigned char) a cada uno de los primeros n caracteres en el objeto al cual señala s. La función memset devuelve el valor de s.
	void *memset ( void *s, int c, size_t n);
	
-Busca cualquier carácter que esté en mayúsculas.
	int isupper(int c);
	
-Busca cualquier carácter que sea letra minúscula.
	int islower(int c);
	
-Convierte una letra mayúscula en la minúscula correspondiente.Si el argumento es un carácter para el que isupper resulta verdadero y existe un caracter correspondiente para el cual islower resulta verdadero, la función tolower devuelve elo carácter correspondiente.
	int tolower(int c);
	
-Convierte una letra minúscula a la letra mayúscula correspondiente.Si el argumento es un carácter para el cual islower resulta verdadero y existe un carácter correspondiente para el cual isupper es verdadero, la función toupper devueve el carácter correspondiente.
	int toupper(int c);
	
-Calcula el coseno de x (medido en radianes).
	double cos(double x);
	
-Devuelve el seno de x (medido en radianes).
	double sin(double x);
	
-Devuelve la tangente de x (medida en radianes).
	double tan(double x);
	
		
-----------------------------/ Tipos de datos y sus tamaños /-----------------------------





-----------------------------/ Tiempos y orden /-----------------------------


Tiempo aprox de una pc es 1s = 10^8 operaciones
Funcion de ordenacion de c++ es de o(n log(n))


-----------------------------/ Union Find-Disjoint set union /-----------------------------


https://cp-algorithms.com/data_structures/disjoint_set_union.html


uf_join(int a, int b) {
    rep[a] = rep[ab];
}

uf_find(int a) {
    if(a == uf_find(a)) {       //Si a es igual a mi representante ret a
        return a;
    }
    uf[a] = uf_find(uf[a]);     //Sino busco el representante de donde este a
}


-----------------------------/ Map /-----------------------------


//Podes asociar distintos tipos de datos a otros

map <pair <ll,ll>,int> mp;  //inicializo un map que asocia un pair con un int
mp [{2,4}]=7;               //asocia el pair {2,4} esta asociada al numero 7
mp.erase ({2,4});           //libera la asociacion al pair {2,4} a 7
mp.count({2,4});            //devuelve 1 si el pair {2,4} esta asociado a algo


-----------------------------/ Pair /-----------------------------


pair<int,int> p={1,2},q={3,1},r={3,0};  //inicializo pair de int
p.first;                                //primer elemento del par
vector<pair<int,int>> v;
v.push_back(p);
v.push_back(q);
v.push_back(r);
sort(v.begin(),v.end());                //ordeno el vector de pair


// ejemplo
int n; cin >> n;
vector <pair<int,int>> v;

fore(i,0,n) {
    int x; cin >> x;
    v.push_back({x,i});     
}


-----------------------------/ Busqueda binaria /-----------------------------


int l = 0;
int r = n-1;
        
while(l<=r) {
    int mid = (l+r)/2;
    if(a[mid] >= q) {
        r = mid-1;
    } else {
        l = mid+1;
    }
}


-----------------------------/ Filas y columnas /-----------------------------


//Con estas funciones le asocio un numero a el par de filas y columnas siendo el primer elemento de la primera fila/columna 0, en la segunda columna 1 y asi consecutivamente,
 la primera fila seria 0 hasta m-1, la segunda fila seria de m hasta 2(m-1) asi hasta la ultuma que seria de n*m hata n(m-1)

int to(nt i, int j) {
    m*i+j;
}

ii from(int x) {        //Esta te devuelve el pair del numero asociado de la fila y la columna respectivamente
    return {x/m, x%m};
}


-----------------------------/ DFS /-----------------------------


void dfs(ll nodoQueVeo, vector<vector<ll>> &Grafo, vector<bool> &Vistado) {
    Vistado[nodoQueVeo] = true;

    for(ll u :Grafo[v]) {
        if(!Vistado[u]) {
            dfs(u, Grafo, Vistado)
        }
    }
}

// El & me sirve para modificar los elementos que voy a ingresar y para no copiar todo un Grafo


-----------------------------/ BFS /-----------------------------


void bfs(ll nodoQueVeo, vector<vector<ll>> &Grafo) {
    vector<bool> Visitado(sz(Grafo))     // Le da el tamaño de Grafo
    queue<ll> q;

    Visitado[v] = true;
    q.push(v)
    while(!q.empty()) {
        v = q.front();
        q.pop();
        for(ll u :Grafo[v]) {
            if (!Visitado[u]) {    
                Visitado[u] = true;
                q.push(u);
            }
        }
    }
}
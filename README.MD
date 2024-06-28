
# Resumen de algoritmos y estructuras para ICPC

## Indice

1. [Compilación](#compialción)

2. [Macros](#macros)

3. [Tiempos y orden](#3-tiempos-y-orden)
    
4. [Estructuras](#estructuras)

    4.1 [String](#strings)

    4.2 [Vectores](#vectores)

    4.3 [Set](#set)

    4.4 [Map](#map)

5. [Algoritmos](#algoritmos)

    5.1 [Dijkstra](#1-dijkstra)

    5.2 [Kruskal](#2-kruskal)

    5.2 [DFS](#3-dfs)

    5.3 [BFS](#4-bfs)

    5.5 [Matematica](#5-matematica)

6. [Trucos y funciones](#6-trucos-y-funciones)

    6.1 [División techo](#61-división-techo)

    6.2 [Sumas parciales](#62-sumas-parciales)

    6.3 [Ordenar un arreglo](#63-ordenar-un-arreglo)

    6.4 [Primer elemento mayor o igual a $x$](#64-primer-elemento-mayor-o-igual-a-x)

    6.5 [memset](#65-memset)

    6.6 [Trigonometría](#66-trigonometría)

    6.7 [Strings](#41-strings)

    



## 1. Compilación

Vamos a compilar con g++:

`g++ -O2 -Wall -Wextra -std=c++17 "file.cpp"`

Luego lo ejecutamos con:

`./a.out`

e ingreso los input que me hagan falta.



## 2. Macros

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
## 3. Tiempos y orden

Tiempo aprox de una pc es $1s = 10^8$ operaciones
Funcion de ordenacion de c++ es de $O(n*log(n))$.


## 4. Estructuras

### 4.1. Strings 

```c++
string s="Hola mundo ";
string t = "ANA";
string a = s + t ;          //concatena

char c,s; cin >> c>>s;
cout << int (c-'a') <<  "\n"
cout << char('a'+15) << "\n";  //devuelve la posicion en ascii de c - el valor en ascii de 'a', despues imprime el char 'p'
```

### 4.2. Vectores

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

### 4.3. Set

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
Todas las funciones son de orden O(log(n)).

### 4.4. Map

Podes asociar distintos tipos de datos a otros

* Inicializo un map que asocia un pair con un int:
    ```c++
    map <pair <ll,ll>,int> mp;
    ```
* Asocia el pair {2,4} esta asociada al numero 7:
    ```c++
    mp [{2,4}]=7;
    ```
* Libera la asociacion al pair {2,4} a 7:
    ```c++
    mp.erase ({2,4});
    ```
* Devuelve 1 si el pair {2,4} esta asociado a algo:
    ```c++
    mp.count({2,4});
    ```

## 5. Algoritmos

### 5.1. Dijkstra

Veo el minimo coste para llegar de un nodo a otro, actualizando los costos de llegar a los nodos vecinos. 
Este algoritmo funciona con valores $>= 0$. La complejidad es de $O((n+m)*log(n))$ donde tengo $n$ nodos y $m$ aristas.

#### Ejercicios: 
    
* B.Biridian_forest

#### Codigo:
```c++
vector<pair<int,int> > g[MAXN];  // u->[(v,cost)]
ll dist[MAXN];
void dijkstra(int x){
	memset(dist,-1,sizeof(dist));
	priority_queue<pair<ll,int> > q;
	dist[x]=0;q.push({0,x});
	while(!q.empty()){
		x=q.top().snd;ll c=-q.top().fst;q.pop();
		if(dist[x]!=c)continue;
		fore(i,0,g[x].size()){
			int y=g[x][i].fst; ll c=g[x][i].snd;
			if(dist[y]<0||dist[x]+c<dist[y])
				dist[y]=dist[x]+c,q.push({-dist[y],y});
		}
	}
}
```

### 5.2. Kruskal

Es decir, busca un subconjunto de aristas que, formando un árbol, incluyen todos los vértices y donde el valor de la suma de todas las aristas del árbol es el mínimo.

Supongo valores $>= 0$. Creo un sub grafo conexo con $n-1$ aristas con el menor costo. No se crean ciclos y se puede representar con un arbol. Tiene complejidad $O(n*log(n))$.

#### Ejercicios:

* B.Mr._kitayutas_colorful_graph

#### Codigo:
```c++
int uf[MAXN];
void uf_init(){memset(uf,-1,sizeof(uf));}
int uf_find(int x){return uf[x]<0?x:uf[x]=uf_find(uf[x]);}
bool uf_join(int x, int y){
	x=uf_find(x);y=uf_find(y);
	if(x==y)return false;
	if(uf[x]>uf[y])swap(x,y);
	uf[x]+=uf[y];uf[y]=x;
	return true;
}
vector<pair<ll,pair<int,int> > > es; // edges (cost,(u,v))
ll kruskal(){  // assumes graph is connected
	sort(es.begin(),es.end());uf_init();
	ll r=0;
	fore(i,0,es.size()){
		int x=es[i].snd.fst,y=es[i].snd.snd;
		if(uf_join(x,y))r+=es[i].fst; // (x,y,c) belongs to mst
	}
	return r; // total cost
}
```

### 5.3. DFS

Es un algoritmo de búsqueda no informada utilizado para recorrer todos los nodos de un grafo o árbol (teoría de grafos) de manera ordenada, pero no uniforme. Su funcionamiento consiste en ir expandiendo todos y cada uno de los nodos que va localizando, de forma recurrente, en un camino concreto. Cuando ya no quedan más nodos que visitar en dicho camino, regresa (Backtracking), de modo que repite el mismo proceso con cada uno de los hermanos del nodo ya procesado.

#### Codigo: 

El & me sirve para modificar los elementos que voy a ingresar y para no copiar todo un Grafo.

```c++
void dfs(ll nodoQueVeo, vector<vector<ll>> &Grafo, vector<bool> &Vistado) {
    Vistado[nodoQueVeo] = true;

    for(ll u :Grafo[nodeQueVeo]) {
        if(!Vistado[u]) {
            dfs(u, Grafo, Vistado);
        }
    }
}
```

### 5.4. BFS

Es un algoritmo de búsqueda no informada utilizado para recorrer o buscar elementos en un grafo (usado frecuentemente sobre árboles). Intuitivamente, se comienza en la raíz (eligiendo algún nodo como elemento raíz en el caso de un grafo) y se exploran todos los vecinos de este nodo. A continuación para cada uno de los vecinos se exploran sus respectivos vecinos adyacentes, y así hasta que se recorra todo el árbol.

#### Codigo:
```c++
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
```

### 5.5. Matematica

#### 5.5.1. $mod(n)$:

Si tengo el $xmod(y) =$ al resto de hacer x dividido y, si x es negativo el mod es igual a $y - (xmod(y))$. Ahora si $x = a - b$, el modulo queda $((a - b)mod(y) + y)mod(y)$ vamos a hacer esto para calcular el mod en C++ ya que este te da restos negativos.

 + Exponenciación binaria 

    Supongamos que queremos calcular $b^emod(y)$ en c++ haríamos los siguitente:

    ```c++
    int elevar(b, e) {
        int x;
        if(e == 0) {
            return 1;
        } else if(e%2 == 0) {
            x = elevar(b,e/2);
            return x*x%y;
        } else {
            x = elevar(b,(e-1)/2);
            x*x%y;
            return x*b%y;
        }
    }
    ```

## 6. Trucos y funciones

### 6.1. División techo 

Para hacer una división techo entre $a$ y $b$ se hace: 

```c++
int a, b;
int result = (a+b-1)/b;
```

### 6.2. Sumas parciales

Supongamos que tenemos un arreglo `a[n]` y queremos calcular la suma de todas las posiciones hasta la i-esima posición, hacemos los siguiente:

```c++

int sum[n];
int sum[0] = 0;

fore(i,0,n) {
    sum[i+1] = sum[i] + a[i]; 
}
```

### 6.3. Ordenar un arreglo

Supongamos que tenemos un arreglo `a[n]`, hacemos lo siguiente:

```c++
sort(a, a+n);
```

Tiene una complejidad de $O(n log(n))$.

### 6.4. Primer elemento mayor o igual a $x$

Devuelve un puntero al primer elemento mayor igual a $x$ de un `a[n]` ordenado:

```c++
lower_bound(a, a+n, x);
```

Con vectores es:
```c++
lower_bound(v.begin(), v.end(), x) - v.begin();
```

Si devuelve un indice fuera de rango (un elemento mayor o igual a $x$) no existe.

### 6.5. memset

La función memset copia el valor de c (convertido a un unsigned char) a cada uno de los primeros n caracteres en el objeto al cual señala s. La función memset devuelve el valor de s.

```c++
void *memset ( void *s, int c, size_t n);
```

### 6.6. Trigonometría

+ Calcula el coseno de x (medido en radianes).
    ```c++
	double cos(double x);
    ```
	
+ Devuelve el seno de x (medido en radianes).
    ```c++
	double sin(double x);
    ```
	
+ Devuelve la tangente de x (medida en radianes).
    ```c++
	double tan(double x);
    ```

### 6.7. Strings

+ Busca cualquier carácter que esté en mayúsculas.
    ```c++
	int isupper(int c);
    ```
	
+ Busca cualquier carácter que sea letra minúscula.
    ```c++
	int islower(int c);
    ```
+ Convierte una letra mayúscula en la minúscula correspondiente.Si el argumento es un carácter para el que isupper resulta verdadero y existe un caracter correspondiente para el cual islower resulta verdadero, la función tolower devuelve elo carácter correspondiente.

    ```c++
	int tolower(int c);
    ```
+ Convierte una letra minúscula a la letra mayúscula correspondiente.Si el argumento es un carácter para el cual islower resulta verdadero y existe un carácter correspondiente para el cual isupper es verdadero, la función toupper devueve el carácter correspondiente.

    ```c++
	int toupper(int c);
    ```

-----------------------------/ Funciones con flotantes /-----------------------------

https://www.programacionfacil.org/cursos/c++/capitulo-19-funciones-matematicas.html


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


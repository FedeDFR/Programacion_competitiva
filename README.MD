
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

5. [Grafos](#grafos)

    5.1 [Dijkstra](#1-dijkstra)

    5.2 [Kruskal](#2-kruskal)

    5.2 [DFS](#3-dfs)

    5.3 [BFS](#4-bfs)

6. [Matematica](#5-matematica)

7. [Trucos y funciones](#6-trucos-y-funciones)

    7.1 [División techo](#61-división-techo)

    7.2 [Sumas parciales](#62-sumas-parciales)

    7.3 [Ordenar un arreglo](#63-ordenar-un-arreglo)

    7.4 [Primer elemento mayor o igual a $x$](#64-primer-elemento-mayor-o-igual-a-x)

    7.5 [memset](#65-memset)

    7.6 [Trigonometría](#66-trigonometría)
    



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
#define sz(x) ((int)x.size())
#define fst first
#define snd second 
#define all(x) x.begin(),x.end()
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
#define NICO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const ll MOD=1e9+7;


int main () {
    NICO;
    
}

```
## 3. Tiempos y orden

Tiempo aprox de una pc es $1s = 10^8$ operaciones
Funcion de ordenacion de c++ es de $O(n*log(n))$.


## 4. Estructuras

### 4.1. Strings 


+ Definir un string.
    ```c++
    string s="Hola ";
    string t = "mundo";
    ```

+ Concatenar dos strings.
    ```c++
    string a = s + t;
    ```

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

+ Convierte todo el string a minuscula.
    ```c++
    string str; cin >> str;

    for (char &c : str) {
        c = tolower(c);
    }
    ```

+ Convierte una letra minúscula a la letra mayúscula correspondiente.Si el argumento es un carácter para el cual islower resulta verdadero y existe un carácter correspondiente para el cual isupper es verdadero, la función toupper devueve el carácter correspondiente.
    ```c++
	int toupper(int c);
    ```

+ Convierte todo el string a mayuscula.
    ```c++
    string str; cin >> str;
    
    for (char &c : str) {
        c = tolower(c);
    }
    ```

### 4.2. Vectores

+ Crea un vector:

    ```c++
    vector <int> v;
    ```
+ Agrega el elemento x al final del vector:
    ```c++
    v.push_back(x);
    ```
+ Elimina el elemento x:
    ```c++
    v.pop_back(x);
    ```
+ Tamaño del vector:
    ```c++
    v.size();
    ```
+ Ordena el vector con complejidad O(n*log(n)):
    ```c++
    sort(v.begin(), v.end());
    ```
+ Devuelve la posicion del menor elemento mayor a p:
    ```c++
    lower_bound(a.begin(), a.end(), p) - a.begin();
    ```
+ Ciclo con vectores:
    ```c++
    for(auto i:v){
        cout << i << " ";    //imprime los elementos del arreglo
    }
    ```

### 4.3. Set

+ Crea un set:
    ```c++
    set<ll> st;
    ```
+ Insertamos un elemento en el conjunto, si hay varios no los agrega repetidos:
    ```c++
    st.insert(x);
    ```
+ Elimino el elemnto x del set:
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

+ Inicializo un map que asocia un pair con un int:
    ```c++
    map <pair <ll,ll>,int> mp;
    ```

+ Asocia el pair {2,4} esta asociada al numero 7:
    ```c++
    mp [{2,4}] = 7;
    ```

+ Libera la asociacion al pair {2,4} a 7:
    ```c++
    mp.erase ({2,4});
    ```

+ Devuelve 1 si el pair {2,4} esta asociado a algo:
    ```c++
    mp.count({2,4});
    ```

+ Inicializo un map que asocia un string con un int:
    ```c++
    map <string,int> años;
    ```

+ Asocia el pair {2,4} esta asociada al numero 7:
    ```c++
    años["Fede"] = 21;
    ```

### 4.5 Pair 

+ Inicializando pairs.
    ```c++
    pair<int,int> p = {1,2}, q = {3,1}, r = {3,0};
    ```

+ Accedo al primer elemento del pair.
    ```c++
    p.first;
    ```

+ Accedo al segundo elemento del pair.
    ```c++
    p.second;
    ```

+ Ejemplo:
    ```c++
    int n; cin >> n;
    vector <pair<int,int>> v;

    fore(i,0,n) {
        int x; cin >> x;
        v.push_back({x,i});     
    }
    ```

+ Al ordenar un vector de pairs de ints, la jerarquía ya viene dada. Se ordena de menor a mayor del primer elemento del pair y despues segun el segundo elemento. Segun los anteriores 3 pairs dados el vector quedaria: 

    + v[0] = {1,2};
    + v[1] = {3,0};
    + v[2] = {3,1};

    ```c++
    sort(v.begin(), v.end()); 
    ```


## 5. Grafos

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

    for(ll u :Grafo[nodoQueVeo]) {
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
void bfs(ll v, vector<vector<ll>> &g) {
    vector<bool> vis(sz(g),false);
    queue<ll> q;
    vis[v] = true;
    q.push(v);
    
    while (!q.empty()) {
        v = q.front();
        q.pop();
        for (ll u : g[v]) {
            if (!vis[u]) {
                vis[u] = true;
                q.push(u);
            }
        }
    }
}
```

### 5.5. Bellman ford

El algoritmo de Bellman-Ford genera el camino más corto en un grafo dirigido ponderado (en el que el peso de alguna de las aristas puede ser negativo).

El algoritmo parte de un vértice origen que será ingresado, a diferencia de Dijkstra que utiliza una técnica voraz para seleccionar vértices de menor peso y actualizar sus distancias mediante el paso de relajación, Bellman-Ford simplemente relaja todas las aristas y lo hace |V| – 1 veces, siendo |V| el número de vértices del grafo.

Para la detección de ciclos negativos realizamos el paso de relajación una vez más y si se obtuvieron mejores resultados es porque existe un ciclo negativo, para verificar porque tenemos un ciclo podemos seguir relajando las veces que queramos y seguiremos obteniendo mejores resultados.



#### Codigo:

```c++
int n;
vector<pair<int,int> > g[MAXN]; // u->[(v,cost)]
ll dist[MAXN];

void bford(int src){ // O(nm)
	fill(dist,dist+n,INF);dist[src]=0;
	fore(_,0,n)fore(x,0,n)if(dist[x]!=INF)for(auto t:g[x]){
		dist[t.fst]=min(dist[t.fst],dist[x]+t.snd);
	}
	fore(x,0,n)if(dist[x]!=INF)for(auto t:g[x]){
		if(dist[t.fst]>dist[x]+t.snd){
			// neg cycle: all nodes reachable from t.fst have -INF distance
			// to reconstruct neg cycle: save "prev" of each node, go up from t.fst until repeating a node. this node and all nodes between the two occurences form a neg cycle
		}
	}
}
```

### 5.6. Floyd Warshall



#### Codigo:

```c++
// g[i][j]: weight of edge (i, j) or INF if there's no edge
// g[i][i]=0
ll g[MAXN][MAXN];int n;
void floyd(){ // O(n^3) . Replaces g with min distances
	fore(k,0,n)fore(i,0,n)if(g[i][k]<INF)fore(j,0,n)if(g[k][j]<INF)
		g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
}
bool inNegCycle(int v){return g[v][v]<0;}
bool hasNegCycle(int a, int b){ // true iff there's neg cycle in between
	fore(i,0,n)if(g[a][i]<INF&&g[i][b]<INF&&g[i][i]<0)return true;
	return false;
}
```

## 6. Matematica

### 6.1. mod(n):

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

### 6.2. Divisores

+ Cuenta la cantidad de divisores menores de x de resto r.
    ```c++
    ll d3(ll x, ll r) {
        
        //if(r == 0) return (x/3);
        //else if(r == 1) return ((x+2)/3);
        //else return ((x+1)/3);

        return ((x+(3-r)%3)/3);
    }
    ```

## 7. Trucos y funciones

### 7.1. División techo 

Para hacer una división techo entre $a$ y $b$ se hace: 

```c++
int a, b;
int result = (a+b-1)/b;
```

### 7.2. Sumas parciales

Supongamos que tenemos un arreglo `a[n]` y queremos calcular la suma de todas las posiciones hasta la i-esima posición, hacemos los siguiente:

```c++

int sum[n];
int sum[0] = 0;

fore(i,0,n) {
    sum[i+1] = sum[i] + a[i]; 
}
```

### 7.3. Ordenar un arreglo

Supongamos que tenemos un arreglo `a[n]`, hacemos lo siguiente:

```c++
sort(a, a+n);
```

Tiene una complejidad de $O(n log(n))$.

### 7.4. Primer elemento mayor o igual a x

Devuelve un puntero al primer elemento mayor igual a $x$ de un `a[n]` ordenado:

```c++
lower_bound(a, a+n, x);
```

Con vectores es:
```c++
lower_bound(v.begin(), v.end(), x) - v.begin();
```

Si devuelve un indice fuera de rango (un elemento mayor o igual a $x$) no existe.

### 7.5. memset

La función memset copia el valor de c (convertido a un unsigned char) a cada uno de los primeros n caracteres en el objeto al cual señala s. La función memset devuelve el valor de s.

```c++
void *memset ( void *s, int c, size_t n);
```

### 7.6. Trigonometría

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

-----------------------------/ Funciones con flotantes /-----------------------------

https://www.programacionfacil.org/cursos/c++/capitulo-19-funciones-matematicas.html


## 8. Disjoint Set Union

El Union-Find (también conocido como Disjoint Set Union, DSU, o estructura de conjuntos disjuntos) es una estructura de datos que maneja una colección de conjuntos disjuntos. Proporciona operaciones eficientes para unir dos conjuntos y encontrar el representante o "líder" de un conjunto en el que se encuentra un elemento determinado. Es particularmente útil en algoritmos relacionados con la teoría de grafos, como la detección de ciclos en un grafo no dirigido y el algoritmo de Kruskal para encontrar el árbol de expansión mínimo.

[Link de pagina](https://cp-algorithms.com/data_structures/disjoint_set_union.html)


 ```c++
uf_join(int a, int b) {
    rep[a] = rep[ab];
}

uf_find(int a) {
    if(a == uf_find(a)) {       //Si a es igual a mi representante ret a
        return a;
    }
    uf[a] = uf_find(uf[a]);     //Sino busco el representante de donde este a
}
 ```




## 9. Búsqueda binaria

La búsqueda binaria es un método para encontrar rápidamente un elemento en una lista que ya está ordenada. En lugar de buscar de forma secuencial desde el principio, como haría la búsqueda lineal, la búsqueda binaria utiliza un enfoque más inteligente: divide y conquista. 

Mientras se cumpla la condición (se_cumple() == true) agrandara su espacio de búsqueda, de lo contrario disminuirá el espacio de búsqueda.

Tiene una complejidad de $O(log(n))$.

#### Codigo:

```c++
ll res = 0, l = 0, r = n, m;
while(l <= r) {           
    m = (l+r)/2;
    if(se_cumple(a,m,h)) {
        l = m+1;
    } else {    
        r = m-1;
    }
}
```

## 10. Manejo de filas y columnas


Con estas funciones le asocio un numero a el par de filas y columnas siendo el primer elemento de la primera fila/columna 0, en la segunda columna 1 y asi consecutivamente,la primera fila seria 0 hasta m-1, la segunda fila seria de m hasta 2(m-1) asi hasta la ultuma que seria de n*m hata n(m-1)

```c++
int to(nt i, int j) { //revisar
    m*i+j;
}
```

+ Esta función te devuelve el pair del numero asociado de la fila y la columna respectivamente.
```c++
ii from(int x) {
    return {x/m, x%m};
}
```




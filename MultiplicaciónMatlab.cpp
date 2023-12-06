fprintf('MULTIPLICACION DE MATRICES ->Ingresar una Matriz A y B \n\n')

m=input('Ingrese el numero de filas de matriz \n');

n=input('Ingrese el numero de columnas de la matriz \n');

p=input('Ingrese el numero de filas de matriz \n');

q=input('Ingrese el numero de columnas de la matriz \n');

if (n==p)

 for i=1:m

 for j=1:n

 a(i,j)=input(['a(', num2str(i), ',', num2str(j), ') : ']);

 end

 end

 for i=1:p

 for j=1:q

 b(i,j)=input(['b(', num2str(i), ',', num2str(j), ') : ']);

 end

 end

 for i=1:m

 for j=1:q

 c(i,j)=0;

 for k=1:n

 c(i,j)=c(i,j)+a(i,k)*b(k,j); 

 end

 end

 end

 disp('La Multiplicacion de A*B es: ');

 disp(c);

else

 disp('No es posible multiplicar')

end

3. 

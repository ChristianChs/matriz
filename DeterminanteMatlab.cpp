clc

clear all

fprintf('DETERMINANTE DE LA MATRIZ \n\n')

n=input('Ingrese el numero de orden de la matriz \n');

for i=1:n

 for j=1:n

 a(i,j)=input(['a(', num2str(i), ',', num2str(j), ') : ']);

 end

end

d=1;

 for h=1:n-1

 p=a(h,h);

d=d*p;

 

 for j=h:n

 a(h,j)=a(h,j)/p;

 end

 i=h+1;

 while i<=n

 f=-a(i,h);

 for j=h:n

 a(i,j)=a(i,j)+f*a(h,j); 

 end

 i=i+1;

 end

 end

 d=d*a(n,n);

 disp('La determinante (d) es: ');

 disp(d);

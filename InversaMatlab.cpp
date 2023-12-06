clc

clear all

fprintf('LA INVERSA DE UNA MATRIZ \n\n')

n=input('Ingresar el numero de orden de la matriz: \n');

for i=1:n

 for j=1:n

 a(i,j)=input(['a(',num2str(i),',',num2str(j),'): ']);

 if i==j

 v(i,j)=1;

 else

 v(i,j)=0;

 end

 end

end

for h=1:n

 p=a(h,h);

 for j=h:n

 a(h,j)=a(h,j)/p;

 end

 for j=1:n

 v(h,j)=v(h,j)/p;

 end

 i=1;

 while i<=n

 if ((i~=n)||(i~=h))

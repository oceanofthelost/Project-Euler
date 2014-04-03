#!/usr/bin/octave -qf

% poly_10=1-n+n^2-n^3+n^4-n^5+n^6-n^7+n^8-n^9+n^10
poly_10=[1 -1 1 -1 1 -1 1 -1 1 -1 1]; %we create the polynomial
x=1:length(poly_10); %create the list of numbers that we will evaluate
                    %poly_10 at. 
y=polyval(poly_10,x); %create a vector of the values of poly_10 at points x

BOP=[]; %will contain a list of the bad opp
for n=1:length(poly_10)-1 
    %we find a list of the BOP's. There will only be a BOP when the n<length(poly_10). 
    %since there will be no BOP at n=length(poly_10) we only have to find that BOps from
    %n=1 to length(poly_10)-1.
    p=polyfit(x(1:n),y(1:n),n-1); 
    %using the data from y and x we create a polynomial that will fit the 
    %data using the a degree of polynomial n-1. we are only looking at the 
    %first n terns of x and y when we generate the polynomial that fits the data.  
    %once the loop is completed we will have found polynomials of degree 1 to 9. 
    BOP=[BOP polyval(p,x(n+1))];
    %once the polynomial for the first n terms is created we know that the terms
    %it will output are valid for 1 to n. The value at n+1 is the BOP and it is the 
    %value that we need to find.
end

fprintf("The result is %15.0f\n",sum(BOP));

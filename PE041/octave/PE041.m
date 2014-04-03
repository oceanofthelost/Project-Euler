#!/usr/bin/octave -qf

i=9;
%i is used to create a number that has digits 1 to i.
%we start with i=9 because we want to find the largest prime number 
%that will contain the digits 1 to i. If there are no primes that contain
%the digits 1 to 9 then we will check all numbers that have digits 1 to 8. 
%we continue this process till we find the largest prime that contains 1 to 
% i only once. 
prime=[];
%variable used for the while loop
while isempty(prime) 
    %once the prime vector has an element it will then exit the loop
    prime=[1:i];
    %declare a vector that has digits 1 to i
    prime=perms(prime);
    %calculate all of the permutations of the digits 1 to i. each 
    %permutation is stored in a row vector. Each element contains one 
    %digit of our number
    prime=prime*(10.^(size(prime,2)-1:-1:0))';
    %we convert each row vector in to a single number. now our matrix 
    %will only have one column. 
    prime=prime(isprime(prime));
    %we assign all prime numbers to the variable prime. If there are no 
    %prime numbers than prime will be empty so we will do this process 
    %once more but now we calculate numbers that have digits 1 to i-1.
    i-=1;
    %decrement i by one.
end

prime=max(prime);


disp(prime);

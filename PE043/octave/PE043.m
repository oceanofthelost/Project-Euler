#!/usr/bin/octave -qf

prime=primes(17);
%create a vector of primes less than or equal to 17
number = [0 1 2 3 4 5 6 7 8 9];
%create a vector where each element is 0 to 9
number = perms(number);
%calculate the permutations of numbers that contain the digits
%0 to 9

for i=2:8 %we only care about digits 2 through 8
    number_3_digits=number(:,i:i+2);
    %assign a new variable the values of digts i through i+2
    number_3_digits=number_3_digits*(10.^(size(number_3_digits,2)-1:-1:0))';
    %convert each row vector into a single number
    number=number(mod(number_3_digits,prime(i-1))==0,:);
    %we find out if the number is divisible by the i'th prime. if it is
    %not divisible by the i'tth prime it is removed from the number vector.
    %the loow will contine 7 times. When it is complete number will contain
    %the numbers that met the specs. 
end

result=sum(number*(10.^(size(number,2)-1:-1:0))');
%convert each row vector into a single number and sum up each number
fprintf("The result is %.0f.\n",result);
%display the result. 

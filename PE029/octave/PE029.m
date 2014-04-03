#!/usr/bin/octave -qf

result = [];

for a=2:100
    for b=2:100
        result=[result a.^b];
    end
end

result = length(unique(result));
disp(result);


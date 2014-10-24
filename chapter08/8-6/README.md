First we should konw that what's the function of back_inserter(v)?
If you had read the chapter06 carefully,and you will catch it.
"back_inserter(v)" need an arguments which typen is an container-
it must be support push_back operator.
and its' function is: use v to produce an iterator,and the iterator will inserter elements
into the v.
so in exercise 8-6 the x should be a container,
and copy(x.begin(),x.end(),back_inserter(m)) will not work,
because the map does not support "push_back". 


LIBFT.a == Wiki

https://www.youtube.com/user/mycodeschool

ft_isalpha = Devuelve un valor int negativo o positivo dependiendo de si recoge un carácter o algo que no sea un carácter.

ft_isdigit = Devuelve un valor int negativo o positivo dependiendo de si recoge un número o algo que no sea un número.

ft_isalnum = Devuelve un valor int negativo o positivo dependiendo de si recoge un carácter/número o algo que no sea un carácter/número.

ft_isascii = Devuelve un valor int negativo o positivo dependiendo de si el carácter recogido (tipo int) pertenece entre 0 y 127 en la tabla ASCII.

ft_isprint = Devuelve un valor int negativo o positivo dependiendo de si el carácter recogido (tipo char) pertenece al grupo entre 32 y 127 en la tabla ASCII (caracteres imprimibles).

ft_strlen = Devuelve un valor size_t y recoge un const char *s (una cadena no cambiable), la función recoge en una variable tipo size_t la longitud del string y devuelve esta misma longitud.

ft_memset = La función devuelve un pointer tipo void, nosotros devolveremos una cadena tipo char ya que nos pide que cambiemos los caracteres de izquierda a derecha de esta cadena el numero de veces definido en len, y además intercambiaremos los caracteres de esta cadena con la variable c, tipo int. Como recogemos en el prototipo un void * lo castearemos a un char * en otra variable para así poder cambiar sus valores.

ft_bzero = La función no devuelve ningún valor, lo único que hace es recoger dos parámetros, un parámetro tipo void *, y otro parámetro tipo size_t. El primer parámetro lo usamos para pasarle la cadena de caracteres, el segundo parámetro lo usamos para definir cuantas veces queremos intercambiar los valores de esa cadena por zeros. Como en la función anterior creamos una variable para guardar el valor de la cadena y lo casteamos a un char *, y para crear el bucle declaramos un integer con un valor inicial de 0.

ft_memcpy = Esta función se basa en utilizar una cadena como referencia para copiar sus caracteres y intercambiarlos en otra cadena el número de veces que se determine en los parámetros. Estos parámetros son void *dst (DESTINO), void *src (FUENTE) y size_t n (número de veces). Como se observa, tenemos que costear las dos cadenas que los void * apuntan y aplicar el cambio en estos el número de veces que n lo determine, devolviendo únicamente la cadena que ha cambiado, que sería dst. El cambio se aplica de izquierda a derecha hasta que n acabe.

ft_memmove = Esta función funciona casi igual que ft_memcpy, la única diferencia es una condición que aplica y en base a esa cambia el orden del cambio de carácteres. Si la función detecta que *dst es mayor que *src, procede a empezar a copiar los carácteres desde el valor final de len, ya que se ha asegurado que la cadena de destino tiene suficiente margen para meter los caracteres de fuente en este.

ft_strlcpy = Esta función también tiene muchos patrones iguales con otra, ft_strlen. Esta función recoge tres valores, dos punteros y un número positivo. Básicamente, copia el número de veces determinado en dstsize los caracteres de src en dst. Si dstsize es mayor que uno la cadena de dst terminará en ‘\0’. Si los valores a copiar superan la longitud de dst sobreescribirá el ‘\0’ y seguirá copiando los carácteres hasta que dstsize o la cadena de src termine. Si dstsize  es igual a 0 la función terminará y devolverá la longitud de la cadena de src.

ft_strlcat = Esta función tiene tres parámetros, dos cadenas de caracteres y un numero positivo (char *dst, const char *src, size_t dstsize). Ademas, utiliza otra función para contar los caracteres de las dos cadenas tipo char * y const char *, la función ft_strlen. El valor de retorno dependerá de la longitud de la longitud de dst y el valor de dstsize, si dstsize es mayor que la longitud de la cadena de dst, devolverá la longitud de (dst + dstsize). Al contrario, si la longitud de (dst + 1) es mayor que dstsize el valor de retorno será (longitud de dst + src). Ahora, vamos a hablar de lo importante, el cambio de caracteres: el cambio se produce de izquierda a derecha, empezando desde el final de la cadena dst y comenzando con el principio de src el número de veces que dstsize lo determine. Como la función anterior determina el último carácter de dst como null, tal como haría la función original.

ft_toupper = La función devuelve y recoge un parámetro tipo int, si este parámetro se sitúa entre los carácteres minúsculos entonces se volverá en mayúscula simplemente cambiando su posición en términos de posiciones de la tabla ASCII.

ft_tolower = Basicamente esta función es una copia de ft_toupper solo que funciona justo de la manera contraria, si encuentra en el parámetro c un carácter mayúsculo su función es convertirlo en minúscula. Otra vez, restando posiciones en la tabla ASCII y retornando el valor correspondiente de este.

ft_strchr = En esta función tenemos dos parámetros, una cadena de carácteres no modificable y un integer. Tenemos que devolver la dirección en el punto concreto de la cadena si el integer c y la cadena s son en algún punto iguales, el integer c simplemente puede ser cualquier tipo de caracter/numero/… y si se encuentra en la cadena entonces tendremos que devolver la dirección al mismo punto. Además, tenemos que disponer de unas condiciones, entre estas la cadena necesita tener por lo menos un caracter (no estar vacío), y si no encuentra el caracter entonces deberá devolver full.

ft_strrchr = Esta función es idéntica a la anterior, ft_strchr. Solo cambia el valor de retorno, en vez de devolver el primer valor coincidente entre la cadena y el caracter/integer devolverá el último valor coincidente que encuentre.

ft_strncmp = Esta función compara las dos cadenas en los parámetros (s1 y s2) el número de veces que size_t n nos permita. El resultado de la comparación se guardara en una variable tipo int (size_t). Si no encuentra ninguna diferencia entre las dos cadenas devolverá un zero como valor de retorno, si encuentra alguna diferencia nos dará un valor positivo o negativo dependiendo del valor de los carácteres en la tabla ASCII.

ft_memchr = Esta función tiene 3 parámetros, un parámetro es una cadena de caracteres constante, otro que determina un caracter en integer, y por último tenemos el numero de caracteres que tendremos que usar. En esta vez también empezaremos desde izquierda a derecha, y si en la cadena encuentra el caracter c tendremos que devolver la cadena. Si no lo encuentra ninguna vez devolveremos full.

ft_memcmp = En esta función tenemos cómo parámetros dos cadenas de caracteres constantes y el numero de caracteres que revisaremos: const char *s1, const char *s2 y size_t n. En esta se comparan en la misma posición las dos cadenas y si alguna vez estos no coinciden y son diferentes se devolverá la diferencia de estos en unsigned char, numero POSITIVO. Si no encuentra ningún carácter en n caracteres entonces devolverá NULL.

ft_strnstr = En esta función tenemos cómo parámetros dos cadenas de caracteres constantes y el numero de caracteres que vamos a repasar: const char *haystack, const char *needle,  size_t len. La cadena de caracteres que tenemos que encontrar en la cadena haystack es la cadena needle, entonces si no encontramos completamente en haystack la cadena de needle, nos devolverá NULL. Y en caso de que lo encuentre devolverá un puntero a la posición en la cadena de haystack.


_____________________________________________________________________________________________________________________________
FUNCIONES CON MALLOC:

ft_calloc = En esta función tenemos un valor de retorno tipo void * y tenemos como parámetros dos size_t, el contador y el tamaño. El propósito de la función es reservar memoria en función del valor de count y por cada count el size (tamaño) que tiene. Entonces debemos crear una variable nueva tipo void * para crear el espacio requerido y después vaciar toda la memoria / llenarla de zeros. Debemos retornar un pointer al espacio reservado!

ft_strdup = En esta función tenemos un valor de retorno tipo char *, la funcionalidad de esta es recoger un const char *s y hacer una copia de este reservando memoria en función de la longitud del original y creando un bucle para sobreescribir cada caracter y crear la copia. Como la función empieza por str tenemos que definir el ultimo espacio de la cadena con NULL!! A la hora de reservar memoria con malloc debemos de sumar uno de espacio para el NULL!

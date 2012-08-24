gcc -fPIC -shared -o ./assert.so assert.c

myLib="./assert.so"

if [ ! -f "$myLib" ]; then
	echo "$myLib create failed!"
else
	gcc -DDEBUG assertTest.c -o assertTest ./assert.so
fi

myTarget="./assertTest"

if [ ! -f "$myTarget" ]; then
	echo "$myTarget create failed!"
else
	./assertTest
fi

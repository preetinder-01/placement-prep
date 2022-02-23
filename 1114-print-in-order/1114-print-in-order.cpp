class Foo {
public:
    atomic<int> progress=0;
    Foo() {
        
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        progress++;
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        while(progress<1)
        {}
        printSecond();
        ++progress;
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
while(progress<2)
{}
        printThird();
    }
};
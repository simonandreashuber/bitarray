# bitarray

### about
One boolean (true or false) takes one bit of memory, not a byte like a normal bool array.

### usage

```C++
//create:
bitarray kawahara(42); //array has 42 booleans

//set and get:
kawahara.set(21, true); //set entry 21 to true
kawahara.get(21); //get value from entry 21
kawahara.setall(false); //set all entries to false

//size:
kawahara.size(); //returns the array size
kawahara.size_byte(); //returns allocated bytes for array (including overhead)
```

---

## Questions & Feedback
Direct your questions to: dev@simonhuber.org

---

## License & Copyright
This Project is licensed under the [MIT License](LICENSE).

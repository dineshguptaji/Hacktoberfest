//Arrays
//In javascript arrays are a reference .It is a type of onject;
//It is ordered collections of items.

let arr=[1,2,3,4];
console.log(typeof arr);//Object
// If we want to know wheather above variable is array or not. so There is a method available in arrays name is isArray(). let see 
console.log(Array.isArray(arr));//true
//In javascript arrays are not like in other programming laguages . It can store all datas whether they can have different datatypes or nm=not. It doesn't matter.

//Arrays methods.
//1.Push:-it will push a new element in array means it will add a new element in array.This methos is having capability to change the original array.
//because we know that arrays are mutable so It can change as well.
let array=[];
array.push(2);
console.log(array);
array.push("banana");
console.log(array);
//2.pop:- it will remove last element from arrays. It will return removed elemets as well.
let poppedElement=array.pop();
console.log(array,poppedElement);
//3.unshift:- it will add element at first  means at the starting of arrays.We can add more than one elements in array by using unshift.
array.unshift(3);
console.log(array);
array.unshift(4,5,6,7,8,9,"banana","playing");
console.log(array);
//4.shift:- It will remove first element of array.
let get=array.shift();
console.log(get);//Note:- as compared to shift and unshift, pop and push are faster. 
//Primitive vs reference type
// As we know primitive types will stored in stack memory so for that they will create our own spaces in stack memory.
//In case of reference type, they will store in heap memory. so if we assign a variable to another variable then both will point same address.
 let arra=[1,2];
 let arra1=arra;
 console.log(arra);
 console.log(arra1);
 //let see changes after pushing elemnets in array
 arra.push(3);
 console.log(arra);
 console.log(arra1);
 //How to clone an array:- clone in this way so that the reference of both arrrays will be different 
 //there are total 3 ways;
 //1. by using slice method:-
 let arrays1=[1,3,4];
 let arrays2=arrays1;
 console.log(arrays1,arrays2);
 let arrays3=arrays1.slice(0);
 console.log(arrays1,arrays3);
 arrays1.push(2);
 console.log(arrays1,arrays3);
 //2.By using concat method:-
 let arrays4=[].concat(arrays1);
 console.log(arrays1,arrays4);
 arrays4.push(5);
 console.log(arrays1,arrays4);

 //3.By using spread operator(...):-
 let arrays5=[3,4,5,6];
 let arrays6=[...arrays5];
 console.log(arrays5,arrays6);
 arrays5.push(78);
 console.log(arrays5,arrays6);

 //For of loop in javascript
 let fruits=["apple","mango","grapes"];
 for(let fruit of fruits){
    console.log(fruit);
 }
//For in loop in javascript with arrays
let fruitss=["Banana","Apple","Grapes","Orange"];
for(let index in fruitss){
    console.log(fruitss[index]);
}
//Array destructing
let arrays_1=[1,2,3,4,5,6,7];
let [shiva,mahadeva,...mahakal]=arrays_1;
console.log(shiva,mahadeva,mahakal);

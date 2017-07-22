package berlin.lib;
using Lambda;
/**
 * ...
 * @author Damilare Akinlaja
 */



class MyArrayExtenison {
  static public function unique<T>(x:Array<T>, f:T->T->Bool):Array<T>{
    var r = [];
    for (e in x){
      if (!r.exists(e, f)) // you can inline exists yourself if you care much about speed. But then you should consider using hash tables or such
        r.push(e);
    }
    return r;
  }
}
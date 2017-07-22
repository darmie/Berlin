package berlin;

import berlin.lib.Parser;
import cpp.Lib;
import berlin.lib.AST;


/**
 * ...
 * @author Damilare Akinlaja
 */
class Main 
{
	
	static function main() 
	{
		var p:Parser = new Parser({});
		var ast:AST = p.parse("42");
		trace(ast);
	}
	
}
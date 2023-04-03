// Open-Close Principle - Good example
 class GraphicEditor {
 	public void drawShape(Shape s) {
 		s.draw();
 	}
 }
 
 class Shape {
 	abstract void draw();
 }
 
 class Rectangle extends Shape  {
 	public void draw() {
 		// draw the rectangle
 	}
 } 
public class TestPoint{
	public static void main(String[] args){
		double dist, dist2;
		Point p = new Point(4.1,7.7);
		Point p1 = new Point();
		Point p2 = new Point(-2.7,3.9);
		Cercle c1 = new Cercle();
		System.out.println("Point p1:" + p1);
		System.out.println("Point p2:" + p2);
		p1.setAbs(5.4);
		System.out.println("Point p1: "+p1);
		dist = p1.distance(p2);
		dist2 = Point.distance2(p1,p2);
		System.out.println("Distance p1 à p2: "+dist);
		System.out.println("Distance deux...?: "+dist2);
		System.out.println(c1);
	}
}
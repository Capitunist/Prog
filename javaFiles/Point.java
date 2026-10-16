public class Point{

//---------------------------------------------------------------------------------------------
	// Attributs
	private double abs;
	private double ord;

//---------------------------------------------------------------------------------------------
	// Accesseurs
	public double getAbs(){
		return abs;
	}

	public double getOrd(){
		return ord;
	}

//---------------------------------------------------------------------------------------------
	// Modificateurs
	public void setAbs(double a){
		abs = a;
	}

	public void setOrd(double o){
		ord = o;
	}

//---------------------------------------------------------------------------------------------
	// Constructeurs
	public Point(){
		this.setAbs(0.0); //abs = O.
		this.setOrd(0.0); //ord = O.
	}

	public Point(double a, double o){
		abs = a;
		ord = o;
	}

//---------------------------------------------------------------------------------------------
	// Méthodes
	public String toString(){
		String res = "";
		res += "(" + abs + "," + ord + ")";
		return res;
	}

	public double distance(Point p){
		double x = this.abs-p.abs;
		double y = this.ord-p.ord;
		return Math.sqrt(x*x+y*y);
	}

	public static double distance2(Point pa, Point pb){
		double x = pa.abs-pb.abs;
		double y = pa.ord-pb.ord;
		return Math.sqrt(x*x+y*y);
	}

	public void translationP(double dx, double dy){
		abs += dx;
		ord += dy;
	}
}
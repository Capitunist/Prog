public class Cercle{

//---------------------------------------------------------------------------------------------	
	// Attributs
	private Point centre;
	private double rayon;

//---------------------------------------------------------------------------------------------
	//Accesseurs -- fonction pour LIRE une valeur
	public Point getCentre(){
		return centre;
	}

	public double getRayon(){
		return rayon;
	}

//---------------------------------------------------------------------------------------------
	// Modificateurs -- fonction pour MODIFIER une valeur
	public void setCentre(Point p){
		centre = new Point(p.getAbs(),p.getOrd()); // ???????
	}

	public void setRayon(double r){
		rayon = r;
	}

//---------------------------------------------------------------------------------------------
	//Constructeurs -- s'exécute pour faire un NEW objet
	public Cercle(){ // Construit un cercle centré sur l'origine du plan
		centre = new Point();
		rayon = 1;
	}

	public Cercle(double r){
		centre = new Point();
		rayon = r;
	}

	/*public Cercle(Point p, double r){
		centre = p;
		rayon = r;
	}*/

	// Autre version de ce constructeur qui crée un Point
	// Avec les mêmes coordonnées que p
	public Cercle(Point p, double r){
		centre = new Point (p.getAbs(),p.getOrd());
		rayon = r;
	}

	// Le centre du cercle et le point p ont les mêmes
	// Coordonnées mais sont deux points distincts

//---------------------------------------------------------------------------------------------
	// Méthodes

	public String toString(){
		String res = "";
		res += "Centre: " + centre + "\n" + "Surface: " + surface() + "\n" + "Périmètre: " + circonference();
		return res;
	}

	public void translationC(double dx, double dy){
		centre.translationP(dx,dy);
	}

	public double circonference(){
		return 2 * Math.PI * rayon;
	}

	public double surface(){
		return Math.PI * rayon * rayon;
	}
}
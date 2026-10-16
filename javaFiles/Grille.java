import java.util.Scanner;

public class Grille{

	// Attributs
	private final static int TAILLE_GRILLE = 6;
	private final static int MAX_GRILLE = 49;
	private int lesNumeros = [];
	private int taille;

	// Accesseurs
	public int getLeNumero(int position){
		return lenumero;
	}

	public int getLesNumeros(){
		return lesNumeros;
	}

	public int getTaille(){
		return taille;
	}

	// Modificateurs
	public int setLeNumero(int pos, int val){
		leNumero = val[pos]; // ??????
	}

	// public int setTaille(int taille){
	// 	this.taille = taille;
	// // recréer tableau ??? (chiant donc on abandonne setTaille())

	// }

	// public void setLesNumeros(int []t){
	// 	lesNumeros = new int [t.length];
	// 	taille = t.length;
	// 	for (int i = 0; i < taille; i++){
	// 		lesNumeros[i] = t[i];
	// 	}
	// }

	// Constructeurs
	public Grille(){

	}

	public Grille(int taille){

	}

	public Grille(Grille g){

	}

	// Méthodes
	public String toString(){
		String res = "[";
		int i;
		for (i = 0; i < taille-1; i++){
			res += lesNumeros[i] + ",";

		} 
		res += lesNumeros[i] + "]";
		return res;
	}

	public void initInteractif(){

	}

	public void initAleatoire(){

	}

	public int compare(Grille g){

	}

	public void tri(){

	}

	// Main
	public static void main(String[] args) {
        Grille g1 = new Grille();
        Grille g2 = new Grille(10); // 10 numéros seront mémorisés
        g1.setLeNumero(0,1);
        g1.setLeNumero(1,2);
        g1.setLeNumero(2,3);
        Grille g3 = new Grille(g1);
        System.out.println("g1: "+g1);
        System.out.println("g2: "+g2);
        System.out.println("g3: "+g3);
        g1.setLeNumero(3,4);
        g3.setLeNumero(4,5);
        System.out.println("g1: "+g1);
        System.out.println("g3: "+g3);
        g1.initAleatoire();
        g1.triMax();
        g3.initAleatoire();
        g3.triMax();
        g2.initInteractif();
        System.out.println("g1: "+g1);
        System.out.println("g2: "+g2);
        System.out.println("g3: "+g3);
        int nb = g1.compareGrille(g3);
        System.out.println(nb); 
    }
}
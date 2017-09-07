#ifndef MOLINETE_H_
#define MOLINETE_H_

/**
 * Un Molinete representa el mecanismo de control de acceso a un lugar,
 * contabilizando las entradas y salidas de personas.
 *
 */
class Molinete {

	private:

		int personasQueEntraron;
		int personasQueSalieron;
		int maximaCantidadDePersonasDentro;

	public:

		/*
		 * pre : no existen personas dentro del lugar.
		 * post: el Molinete queda habilitado para controlar el acceso de
		 * 		 personas, considerando que no existen aún personas dentro.
		 */
		Molinete();

		/*
		 * pre : existen 'personasQueYaEstanDentro' personas
		 * 		 dentro del lugar.
		 * 		 'personasQueYaEstanDentro' es mayor a 0
		 * post: el Molinete queda habilitado para controlar el acceso de personas,
		 *       considerando que ya entraron tantas personas
		 *       como lo indique 'personasQueYaEstanDentro'.
		 */
		Molinete(int personasQueYaEstanDentro);

		/*
		 * post: permite la entrada de una persona.
		 */
		void dejarEntrar();

		/*
		 * pre : existen personas dentro.
		 * post: permite el salida de una persona.
		 */
		void dejarSalir();

		/*
		 * post: devuelve la cantidad de personas que el Molinete dejo
		 * 		 entrar pero no dejó salir.
		 */
		int contarPersonasDentro();

		/*
		 * post: indica si existen personas que hayan entrado y
		 * 		 no hayan salido.
		 */
		bool existenPersonasDentro();
		/*
		 * post: indica la cantidad total de personas que
		 *       alguna vez entraron.
		 */
		int contarTotalDePersonasQueEntraron();

		/*
		 * post: devuelve la maxima cantidad de personas
		 * 		 que en algún momento estuvieron adentro.
		 *
		 */
		int calcularMaximaCantidadDePersonasDentro();
};

#endif /* MOLINETE_H_ */

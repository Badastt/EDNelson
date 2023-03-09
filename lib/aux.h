#ifndef AUX
#define AUX
	
	#define ERROR (T){-1, -1, -1};
	typedef enum tipoCarta {
	cartaNormal, cartaBloqueio, cartaReverso, cartaCompra2, cartaMudaCor, cartaCompra4
	} tipoCarta;

	typedef enum corCarta{
		vermelho, amarelo, verde, azul, preto
	} corCarta;

	typedef struct {
		int num;
		corCarta cor;
		tipoCarta tipo;
	} carta;
	
	#define NUM_CARTAS 108
	
	carta *criaBaralho();
	char *returnEnumCor (corCarta);
	char *returnEnumTipo (tipoCarta);
	void swapCartas (carta *, int , int );
	void shuffleCartas (carta *, int);
	
	typedef carta T;

	struct nodeStack {
		carta element;
		struct nodeStack *next;
	};

	typedef struct nodeStack nodeStack;

	typedef struct {
		nodeStack *top;
		unsigned quantidade;
	} stack;

	void initializeStack(stack *);
	void addStack (stack *, T);
	void removeStack (stack *);
	int empty (stack *);
	T getStack (stack *s);

#endif
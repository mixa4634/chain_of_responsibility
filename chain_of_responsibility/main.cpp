#include "criminal_action.h"
#include "policeman.h"

int main(void)
{
	policeman chief(10);
	policeman worker(1, &chief);

	criminal_action 
		r1("Кража кошелька", 1), 
		r2("Убийство", 8),
		r3("Ограбление банка", 15);

	worker.handle_request(&r1); //Будет расследовано worker
	worker.handle_request(&r2); //Будет расследовано chief
	worker.handle_request(&r3); //Будет выброшено исключение logic_error

	return 0;
}

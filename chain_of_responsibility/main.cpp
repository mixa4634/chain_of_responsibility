#include "criminal_action.h"
#include "policeman.h"

int main(void)
{
	policeman chief(10);
	policeman worker(1, &chief);

	criminal_action 
		r1("Кража кошелька", 1), 
		r2("Óáèéñòâî", 8),
		r3("Îãðàáëåíèå áàíêà", 15);

	worker.handle_request(&r1); //Áóäåò ðàññëåäîâàíî worker
	worker.handle_request(&r2); //Áóäåò ðàññëåäîâàíî chief
	worker.handle_request(&r3); //Áóäåò âûáðîøåíî èñêëþ÷åíèå logic_error

	return 0;
}

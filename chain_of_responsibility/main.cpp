#include "criminal_action.h"
#include "policeman.h"

int main(void)
{
	policeman chief(10);
	policeman worker(1, &chief);

	criminal_action 
		r1("����� ��������", 1), 
		r2("��������", 8),
		r3("���������� �����", 15);

	worker.handle_request(&r1); //����� ������������ worker
	worker.handle_request(&r2); //����� ������������ chief
	worker.handle_request(&r3); //����� ��������� ���������� logic_error

	return 0;
}
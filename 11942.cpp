<<<<<<< HEAD
#include <cstdio>
using namespace std;

int main() {
	int tc, c, p;
	bool up, down;

	scanf("%d", &tc);
	printf("Lumberjacks:\n");

	while (tc--) {
		up = down = false;
		scanf("%d", &p);
		for (int i = 0; i < 9; i++) {
			scanf("%d", &c);
			if (p < c)
				up = true;
			else
				down = true;
			p = c;
		}

		if (up && down)
			printf("Unordered\n");
		else
			printf("Ordered\n");
	}

	return 0;
=======
#include <cstdio>
using namespace std;

int main() {
	int tc, c, p;
	bool up, down;

	scanf("%d", &tc);
	printf("Lumberjacks:\n");

	while (tc--) {
		up = down = false;
		scanf("%d", &p);
		for (int i = 0; i < 9; i++) {
			scanf("%d", &c);
			if (p < c)
				up = true;
			else
				down = true;
			p = c;
		}

		if (up && down)
			printf("Unordered\n");
		else
			printf("Ordered\n");
	}

	return 0;
>>>>>>> e1a7995c3942d40d2fff2a338b64a56fba2a866e
}
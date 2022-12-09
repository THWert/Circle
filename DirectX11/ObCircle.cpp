#include "framework.h"
#include "ObCircle.h"

ObCircle::ObCircle()
{
}

ObCircle::~ObCircle()
{
}

void ObCircle::Render()
{
    MoveToEx(g_hdc, position.x + 100 * cosf(0 * ToRadian + rotation) * scale.x,
        position.y + 100 * sinf(0 * ToRadian + rotation) * scale.y, NULL);

    for (int i = 0; i < 359; i++)
    {
        LineTo(g_hdc, position.x + 100 * cosf(i * ToRadian + rotation) * scale.x,
            position.y + 100 * sinf(i * ToRadian + rotation) * scale.y);
    }
    
    LineTo(g_hdc, position.x + 100 * cosf(0 * ToRadian + rotation) * scale.x,
        position.y + 100 * sinf(0 * ToRadian + rotation) * scale.y);
}
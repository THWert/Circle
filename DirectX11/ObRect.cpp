#include "framework.h"

ObRect::ObRect()
{
}

ObRect::~ObRect()
{
}

void ObRect::Render()
{
    MoveToEx(g_hdc, position.x + 100 * cosf(45 * ToRadian + rotation) * scale.x,
        position.y + 100 * sinf(45 * ToRadian + rotation) * scale.y, NULL);

    LineTo(g_hdc, position.x + 100 * cosf(135 * ToRadian + rotation) * scale.x,
        position.y + 100 * sinf(135 * ToRadian + rotation) * scale.y);

    LineTo(g_hdc, position.x + 100 * cosf(225 * ToRadian + rotation) * scale.x,
        position.y + 100 * sinf(225 * ToRadian + rotation) * scale.y);

    LineTo(g_hdc, position.x + 100 * cosf(315 * ToRadian + rotation) * scale.x,
        position.y + 100 * sinf(315 * ToRadian + rotation) * scale.y);

    LineTo(g_hdc, position.x + 100 * cosf(45 * ToRadian + rotation) * scale.x,
        position.y + 100 * sinf(45 * ToRadian + rotation) * scale.y);
}

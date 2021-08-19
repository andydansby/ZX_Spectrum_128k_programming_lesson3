#ifndef UNCONTENDED_H
#define UNCONTENDED_H

//UNCONTENDED RAM
unsigned char add_two_numbers (unsigned char a, unsigned char b)
{
    return a + b;
}

unsigned char multiply2numbers (unsigned char A, unsigned char B)
{
	return A * B;
}

unsigned char subtract2numbers (unsigned char A, unsigned char B)
{
	return A - B;
}

void Border_test (void)
{
    if (in_key_pressed( IN_KEY_SCANCODE_1 ))
    {
        ava = 1;
    }
    if (in_key_pressed( IN_KEY_SCANCODE_2 ))
    {
        ava = 2;
    }
    if (in_key_pressed( IN_KEY_SCANCODE_3 ))
    {
        ava = 3;
    }
    if (in_key_pressed( IN_KEY_SCANCODE_4 ))
    {
        ava = 4;
    }
    if (in_key_pressed( IN_KEY_SCANCODE_5 ))
    {
        ava = 5;
    }
    if (in_key_pressed( IN_KEY_SCANCODE_0 ))
    {
        ava = 0;
    }

    if (ava == 1) //first test
    {
        //intrinsic_label(border_start);
        //intrinsic_label(border_end);
        zx_border(INK_BLACK);
        zx_border(INK_BLUE);
    }

    if (ava == 2) //second test
    {
        Border_color = 0;
        border_Change_contended1();
        Border_color = 2;
        border_Change_contended1();
    }

    if (ava == 3) //third test
    {
        border_Change_contended2(0);
        border_Change_contended2(3);
    }

    if (ava == 4) //fourth test
    {
        border_Change_uncontended(0);
        border_Change_uncontended(4);
    }

    if (ava == 5) //fifth test
    {
        border_Change_RAM0(0);
        border_Change_RAM0(5);
    }

    if (ava == 0) //reset test
    {
        zx_border(INK_WHITE);
    }
}

#endif

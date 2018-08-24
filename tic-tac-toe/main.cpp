#include <windows.h>
#include <tchar.h>
#include "resource.h"
#include <time.h>

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

HWND hStart, hStop, hButtons[9], prog, hHwnd;
HBITMAP hBmp;
bool isStart = 0;


int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	// создаём главное окно приложения на основе модального диалога
	return DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc);
}

int area[3][3] = { 0 }, count, clicks = 0;
TCHAR Ox[5], Oy[5];

void stop_game(); //объявление ф-ции

void Check(int code)
{
	int what;
	switch (code)
	{
	case 1:
		what = area[0][0];
		if (what == area[0][1])
		{
			if (what == area[0][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][1])
		{
			if (what == area[2][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][0])
		{
			if (what == area[2][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		break;
	case 2:
		what = area[0][1];
		if (what == area[0][2])
		{
			if (what == area[0][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][1])
		{
			if (what == area[2][1])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		break;
	case 3:
		what = area[0][2];
		if (what == area[0][1])
		{
			if (what == area[0][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][1])
		{
			if (what == area[2][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][2])
		{
			if (what == area[2][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		break;
	case 4:
		what = area[1][0];
		if (what == area[0][0])
		{
			if (what == area[2][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][1])
		{
			if (what == area[1][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		break;
	case 5:
		what = area[1][1];
		if (what == area[0][1])
		{
			if (what == area[2][1])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[0][0])
		{
			if (what == area[2][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][0])
		{
			if (what == area[1][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[2][0])
		{
			if (what == area[0][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		break;
	case 6:
		what = area[1][2];
		if (what == area[1][1])
		{
			if (what == area[1][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[0][2])
		{
			if (what == area[2][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		break;
	case 7:
		what = area[2][0];
		if (what == area[1][1])
		{
			if (what == area[0][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][0])
		{
			if (what == area[0][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[2][1])
		{
			if (what == area[2][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		break;
	case 8:
		what = area[2][1];
		if (what == area[2][2])
		{
			if (what == area[2][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][1])
		{
			if (what == area[0][1])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		break;
	case 9:
		what = area[2][2];
		if (what == area[2][1])
		{
			if (what == area[2][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][1])
		{
			if (what == area[0][0])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		else if (what == area[1][2])
		{
			if (what == area[0][2])
			{
				if (what == 1)
				{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Крестики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
				else{
					isStart = 0;
					MessageBox(0,
						TEXT("Победили Нолики!"),
						TEXT("Победа"),
						MB_OK | MB_ICONINFORMATION);
					stop_game();
				}
			}
		}
		break;
	default:
		if (clicks == 9)
		{
			isStart = 0;
			MessageBox(0,
				TEXT("Победила дружба!"),
				TEXT("Ничья"),
				MB_OK | MB_ICONINFORMATION);
			stop_game();
		}
		break;
	}
}

static int tt, whoFirst = 0;
static TCHAR str[120];

void bot_step()
{
	int x, y, z = 0;
	if (count == 1)
	{
		do
		{
			x = rand() % 3;
			y = rand() % 3;
		} while (area[y][x] != 0);
		count++;
		area[y][x] = 2 - whoFirst;
		if (whoFirst == 1)
		{
			wsprintf(Oy, TEXT("X"));
		}
		else{
			wsprintf(Oy, TEXT("O"));
		}
		z = y * 3 + x;
		SetWindowText(hButtons[z], Oy);
		EnableWindow(hButtons[z], FALSE);
		z++;
		clicks++;
		Check(z);
	}
	else{
		do
		{
			x = rand() % 3;
			y = rand() % 3;
		} while (area[y][x] != 0);
		area[y][x] = 2 - whoFirst;
		if (whoFirst == 1)
		{
			wsprintf(Oy, TEXT("X"));
		}
		else{
			wsprintf(Oy, TEXT("O"));
		}
		count++;
		z = y * 3 + x;
		SetWindowText(hButtons[z], Oy);
		EnableWindow(hButtons[z], FALSE);
		z++;
		clicks++;
		Check(z);
	}
}

void time_game()
{
	wsprintf(str, TEXT("Игра длилась : %d секунд(ы))"), tt);  // формирование строки следующего формата:  день месяц число часы:минуты:секунды год
	str[lstrlen(str) - 1] = '\0';
	MessageBox(0,
		str,
		TEXT("Время игры"),
		MB_OK | MB_ICONINFORMATION);
}

void stop_game()
{
	EnableWindow(hStart, TRUE);
	EnableWindow(hStop, FALSE);
	for (size_t i = 0; i < 9; i++)
	{
		EnableWindow(hButtons[i], FALSE);
	}
	SetFocus(hStart);
	wsprintf(Ox, TEXT(""));
	for (size_t i = 0; i < 9; i++)
	{
		SetWindowText(hButtons[i], Ox);
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			area[i][j] = 0;
		}
	}
	count = 0;
	time_game();
	//SetWindowText(prog, TEXT("Крестики нолики"));
}

void tic_tac()
{
	if (isStart)
	{
		tt = tt + 1;	// количество секунд, прошедших с 01.01.1970
		wsprintf(str, TEXT("%d)"), tt);  // формирование строки следующего формата:  день месяц число часы:минуты:секунды год
		str[lstrlen(str) - 1] = '\0';
		SetWindowText(prog, str);
	}
}

void playerStep(int button)
{
	clicks++;
	count++;
	if (whoFirst == 0)
	{
		wsprintf(Ox, TEXT("X"));
		SetWindowText(hButtons[button], Ox);
		EnableWindow(hButtons[button], FALSE);
	}
	else{
		wsprintf(Ox, TEXT("O"));
		SetWindowText(hButtons[button], Ox);
		EnableWindow(hButtons[button], FALSE);
	}
	
}

BOOL CALLBACK DlgProc(HWND hWnd, UINT message, WPARAM wp, LPARAM lp)
{
	switch (message)
	{
	case WM_INITDIALOG:
		hHwnd = hWnd;
		prog = GetDlgItem(hWnd, IDC_STATIC1);
		hStart = GetDlgItem(hWnd, IDSTART);
		hStop = GetDlgItem(hWnd, IDSTOP);
		hButtons[0] = GetDlgItem(hWnd, IDC_BUTTON1);
		hButtons[1] = GetDlgItem(hWnd, IDC_BUTTON2);
		hButtons[2] = GetDlgItem(hWnd, IDC_BUTTON3);
		hButtons[3] = GetDlgItem(hWnd, IDC_BUTTON4);
		hButtons[4] = GetDlgItem(hWnd, IDC_BUTTON5);
		hButtons[5] = GetDlgItem(hWnd, IDC_BUTTON6);
		hButtons[6] = GetDlgItem(hWnd, IDC_BUTTON7);
		hButtons[7] = GetDlgItem(hWnd, IDC_BUTTON8);
		hButtons[8] = GetDlgItem(hWnd, IDC_BUTTON9);
		CheckRadioButton(hWnd, IDC_RADIO1, IDC_RADIO2, IDC_RADIO2);
		CheckRadioButton(hWnd, IDC_RADIO3, IDC_RADIO4, IDC_RADIO3);
		return TRUE;
	case WM_CLOSE:
		EndDialog(hWnd, 0); // закрываем модальный диалог
		return TRUE;
	case WM_COMMAND:
		if (count % 2 != whoFirst && count != 0)
		{
			return TRUE;
		}
		if (LOWORD(wp) == IDSTART)
		{
			clicks = 0;
			SetTimer(hWnd, 1, 1000, NULL);
			EnableWindow(hStart, FALSE);
			EnableWindow(hStop, TRUE);
			for (size_t i = 0; i < 9; i++)
			{
				EnableWindow(hButtons[i], TRUE);
			}
			SetFocus(hStop);
			tt = 0;
			isStart = 1;
			if (IsDlgButtonChecked(hWnd, IDC_RADIO1) == BST_CHECKED)
			{
				whoFirst = 1;
			}
			else{
				whoFirst = 0;
			}
		}
		else if (LOWORD(wp) == IDSTOP)
		{
			KillTimer(hWnd, 1);
			stop_game();
		}
		else if (LOWORD(wp) == IDC_BUTTON1)
		{
			area[0][0] = 1 + whoFirst;
			playerStep(0);
			Check(1);
		}
		else if (LOWORD(wp) == IDC_BUTTON2)
		{
			area[0][1] = 1 + whoFirst;
			playerStep(1);
			Check(2);
		}
		else if (LOWORD(wp) == IDC_BUTTON3)
		{
			area[0][2] = 1 + whoFirst;
			playerStep(2);
			Check(3);
		}
		else if (LOWORD(wp) == IDC_BUTTON4)
		{
			area[1][0] = 1 + whoFirst;
			playerStep(3);
			Check(4);
		}
		else if (LOWORD(wp) == IDC_BUTTON5)
		{
			area[1][1] = 1 + whoFirst;
			playerStep(4);
			Check(5);
		}
		else if (LOWORD(wp) == IDC_BUTTON6)
		{
			area[1][2] = 1 + whoFirst;
			playerStep(5);
			Check(6);
		}
		else if (LOWORD(wp) == IDC_BUTTON7)
		{
			area[2][0] = 1 + whoFirst;
			playerStep(6);
			Check(7);
		}
		else if (LOWORD(wp) == IDC_BUTTON8)
		{
			area[2][1] = 1 + whoFirst;
			playerStep(7);
			Check(8);
		}
		else if (LOWORD(wp) == IDC_BUTTON9)
		{
			area[2][2] = 1 + whoFirst;
			playerStep(8);
			Check(9);
		}
		return TRUE;
	case WM_TIMER:
		tic_tac();
		if (count % 2 != whoFirst)
		{
			bot_step();
		}
		return TRUE;
	}


	return FALSE;
}
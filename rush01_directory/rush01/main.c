/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:31:25 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/14 19:47:48 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strtok(char *str, int (*number)[4]);
void	generate(int (*puzzle)[4], int (*number)[4], int row, int *success);
int		argck(char *str);
void	ft_print(char *c);

int	main(int argc, char *argv[]) //コマンドライン引数を受け取るときに使う
{
	int puzzle[4][4]; /*正解を格納する2次元配列 */
	int number[4][4]; //コマンドライン (入力) から受け取った文字を格納するための準備の配列
	int *success;     //結果が出力されたかを確認する為の変数 1 =結果が出てる、 0=失敗
	int s;

	s = 0;
	success = &s;
	if (argc != 2) // argcが2じゃないときを弾くために書いている (正しくない入力を弾くため)
	{
		ft_print("Error");
	}
	else if (argck(argv[1])) // argck(argv[]))がTRUEのとき実行
	{
		ft_strtok(argv[1], number); //文字列ををプログラムが処理できるように整理する関数
		generate(puzzle, number, 0, success);
		// 想定の盤面を全て一つずつ作成して、条件に当てはまった時それを出力する関数
		if (*success == 1) //出力ができない、失敗したときに（１じゃないとき）エラーを返す
			ft_print("Error");
	}
	else
		ft_print("Error"); // argck(argv[]))がFallsの時にエラーを返す
	return (0);
}
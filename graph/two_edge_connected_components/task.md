## @{keyword.statement}
$N$ 頂点 $M$ 辺の無向グラフが与えられる。$i$ 番目の辺は $(a_i, b_i)$ である。このグラフは単純とは限らない。
このグラフを二辺連結成分分解してください。



## @{keyword.constraints}

- $@{param.N_MIN} \leq N \leq @{param.N_MAX}$
- $@{param.M_MIN} \leq M \leq @{param.M_MAX}$
- $0 \leq a_i, b_i < N$

## @{keyword.input}

~~~
$N$ $M$
$a_0$ $b_0$
$a_1$ $b_1$
:
$a_{M - 1}$ $b_{M - 1}$
~~~

## @{keyword.output}

$K$ を二辺連結成分の個数として、$1 + K$ 行出力する。
最初の行には $K$ を出力し、その後 $K$ 行では以下のように出力する。$l$ は二辺連結成分の頂点数であり、$v_i$ はその頂点番号である。

~~~
$l$ $v_0$ $v_1$ ... $v_{l-1}$
~~~

正しい出力が複数存在する場合は、どれを出力しても構わない。


## @{keyword.sample}

@{example.example_00}

@{example.example_01}

@{example.example_02}
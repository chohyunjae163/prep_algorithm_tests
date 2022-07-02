# https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
# Runtime: 533 ms, faster than 22.22% of Elixir online submissions for Best Time to Buy and Sell Stock.
# Memory Usage: 71.7 MB, less than 66.67% of Elixir online submissions for Best Time to Buy and Sell Stock.

defmodule Solution do          
  def max_profit(prices) do
    prices
    |> Enum.reduce({1000000,0,0}, 
                   fn x, accu -> 
                             cond do
                             x < elem(accu,0) -> {x , x , max(elem(accu,1) - elem(accu,0), elem(accu,2))}
                             x > elem(accu,1) -> {elem(accu,0),x, max(elem(accu,1) - elem(accu,0), elem(accu,2))}
                             true -> {elem(accu,0),elem(accu,1),max(elem(accu,1) - elem(accu,0), elem(accu,2))}
                             end
                    end)
    |> (&(max(elem(&1,1) - elem(&1,0),elem(&1,2)))).()
  end
end

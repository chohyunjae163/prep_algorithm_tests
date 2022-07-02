# https://leetcode.com/problems/longest-substring-without-repeating-characters/
# Runtime: 908 ms, faster than 56.52% of Elixir online submissions for Longest Substring Without Repeating Characters.
# Memory Usage: 51.2 MB, less than 91.30% of Elixir online submissions for Longest Substring Without Repeating

defmodule Solution do
  @spec length_of_longest_substring(s :: String.t) :: integer
  def length_of_longest_substring(s) do
    get_count(s,"",0,0)
  end
  
  #base case    
  defp get_count(s,_substr,_substr_len,maxlen) when s == "", do: maxlen
  #start case                                                
  defp get_count(s,_substr,_substr_len,maxlen) when maxlen == 0, do: get_count(remove_first_char(s),String.first(s),1,1) 
  #other case    
  defp get_count(s,substr,substr_len,maxlen) do
    case :binary.match substr , String.first(s) do
        :nomatch  -> 
        get_count(remove_first_char(s),substr <> String.first(s),substr_len + 1,greater(substr_len + 1,maxlen))
        { x , 1 } -> 
        new_str = create_new_substr(substr,s,x)
        get_count(remove_first_char(s),new_str,String.length(new_str),greater(String.length(new_str),maxlen))
    end
  end
      
  ##helper functions
  defp remove_first_char(s), do: String.slice(s,1..-1)
  defp greater(a,b) when a > b, do: a
  defp greater(a,b) when a <= b, do: b
  defp create_new_substr(substr,s,x), do: elem(String.split_at(substr,x+1),1) <> String.first(s)
end

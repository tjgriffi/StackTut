public class MyStack<T>{
	private class MyStackNode<T>
	{
		private T _data;
		private MyStackNode<T> _next;

		public MyStackNode<T>(T data){
			_data = data
		}
	}

	private MyStackNode _top;

	public bool isEmpty(){
		return (_top == null);
	}

	public T peek(){
		return _top._data;
	}
}
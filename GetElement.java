class GetElement
{
	static int getElement(int[] arr, int index) {
		return arr[index];
	}

	public static void main(String[] args) {
		int [] arr = { 3, 4, 5 };
		int re = getElement(arr, 2);
		System.out.println(re);
	}
}

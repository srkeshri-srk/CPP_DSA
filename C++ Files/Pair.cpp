//template <typename T>
template <typename T, typename V>

class Pair
{	
	private:
		T x;
		V y;

	public:

		T getX() {
			return x;
		}

		V getY() {
			return y;
		}

		void setX(T x) {
			this->x = x;
		}

		void setY(V y) {
			this->y = y;
		}
	
	
	
};
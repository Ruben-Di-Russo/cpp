#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:

    class Iterator {
    public:

        Iterator(typename std::stack<T>::container_type::iterator it) : current(it) {}

        bool operator==(const Iterator& other) const {
            return current == other.current;
        }

        bool operator!=(const Iterator& other) const {
            return !(*this == other);
        }

        Iterator& operator++() {
            ++current;
            return *this;
        }

        Iterator operator++(int) {
            Iterator temp(*this);
            ++current;
            return temp;
        }

		    Iterator& operator--() {
	        --current;
	        return *this;
	    }

    	Iterator operator--(int) {
        	Iterator temp(*this);
        	--current;
    	    return temp;
	    }

        T& operator*() const {
            return *current;
        }

    private:
        typename std::stack<T>::container_type::iterator current;};
    	Iterator begin() {
        	return Iterator(this->c.begin());
    	}

    	Iterator end() {
        	return Iterator(this->c.end());
    	}
};


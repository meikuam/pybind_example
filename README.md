pybind_example

```bash
sudo apt install python-pybind11
pip install -r requirements.txt

python setup.py build_ext -i
```


```
>>> from pybind_example import add
>>> a = [10,10,10]
>>> b = [20,10,10]
>>> c = add(a, b, 3)
>>> c
[30, 20, 20]
>>>
```

# C++ - modules

C++ - modules серия задач для изучения различных аспектов языка C++ и ООП.

## Ссылки на другие модули

0. [CPP module 00](https://github.com/vrivka/cpp_00)
1. [CPP module 01](https://github.com/vrivka/cpp_01)
2. [CPP module 02](https://github.com/vrivka/cpp_02)
3. [CPP module 03](https://github.com/vrivka/cpp_03)
4. [CPP module 04](https://github.com/vrivka/cpp_04)
5. [CPP module 05](https://github.com/vrivka/cpp_05)
6. [CPP module 06](https://github.com/vrivka/cpp_06)
7. [CPP module 07](https://github.com/vrivka/cpp_07)
8. CPP module 08

# C++ - Module 08

## Описание модуля

Этот модуль разработан, чтобы помочь понять шаблонные контейнеры, итераторы и алгоритмы в C++.

## Задачи

### Exercise 00: Easy find

Первое простое упражнение — это способ "встать с правой ноги".

Требуется написать шаблонную функцию `easyfind`, который принимает тип `T`. Она принимает два параметра. Первый имеет тип `T`, а второй — `int`.

Предполагая, что `T` является контейнером целых чисел, эта функция должна найти первое вхождение второго параметра в первом.

Если вхождение не найдено, выбрасывается исключение.

### Exercise 01: Span

Нужно разработать класс `Span`, который может хранить максимум `N` целых чисел. `N` — переменная типа `unsigned int` и будет единственным параметром, передаваемым конструктору.

Этот класс будет иметь функцию-член с именем `addNumber()` для добавления одного числа в `Span`. Она будет использоваться для заполнения класса. Любая попытка добавить новый элемент, если уже сохранено `N` элементов, должна вызвать исключение.

Затем реализовать две функции-члена: `shortestSpan()` и `longestSpan()`.

Они соответственно найдут кратчайший промежуток или самый длинный промежуток (или расстояние, если хотите) между всеми сохраненными числами и вернут его. Если числа не сохранены или есть только одно, диапазон не может быть найден. Таким образом, сгенерируйте исключение.

### Exercise 02: Mutated abomination

Теперь пора перейти к более серьезным вещам. Разработаем что-нибудь необычное.

Контейнер `std::stack` очень удобен. К сожалению, это один из немногих контейнеров `STL`, который НЕ является итерируемым. Это очень плохо.

Но зачем нам это принимать? Особенно, если мы можем позволить себе разбить исходный стек, чтобы создать недостающие функции.

Чтобы исправить эту несправедливость, можно сделать контейнер `std::stack` итерируемым.

Требуется написать класс `MutantStack`. Он будет наследоваться от `std::stack`. Он будет предлагать все свои функции-члены, а также дополнительную фичу: итераторы.

###### Навигация по модулям
[<<<<](https://github.com/vrivka/cpp_07)
[00](https://github.com/vrivka/cpp_00) |
[01](https://github.com/vrivka/cpp_01) |
[02](https://github.com/vrivka/cpp_02) |
[03](https://github.com/vrivka/cpp_03) |
[04](https://github.com/vrivka/cpp_04) |
[05](https://github.com/vrivka/cpp_05) |
[06](https://github.com/vrivka/cpp_06) |
[07](https://github.com/vrivka/cpp_07) |
08
# Algoritmos e Tipos Abstratos de Dados

## Lab 11 | Exercícios + Template  

:gb: [English version](README_en.md)

Este repositório foi criado a partir de:

- <https://github.com/estsetubal-atad/CProgram_Template> 

Consulte o README se tiver dúvidas sobre a sua utilização.

----

**Objetivos**:

- Especificação e implementação de um ADT do género *coleção*: `ADT Priority Queue`

**Referências**:

- “Tipos Abstratos de Dados – Linguagem C. Bruno Silva”, disponível no Moodle.

---

:bulb: No decurso deste trabalho laboratorial terá de fornecer uma implementação completa do `ADT Priority Queue` (*fila com prioridade*). Neste ADT é associado a cada elemento um *valor de prioridade*; os elementos são atendidos (removidos) com base na sua prioridade, i.e., os elementos com maior prioridade são atendidos primeiro. Contudo, se existirem elementos com a mesma prioridade, estes são atendidos pela ordem de chegada (FIFO).


### Nível 1 (Duração estimada: 15min)

1. Atente na especificação do ADT em `pqueue.h`; é, em tudo, idêntica à do ADT Queue.

    :warning: Existe adicionalmente a forma de obter a *prioridade* de um elemento - função `pqueueElemPriorityValue` no módulo :gear: `pqueueElem`.

2. Forneça a documentação *doxygen* no ficheiro :page_facing_up: `pqueue.h` (pode reaproveitar a documentação do ADT Queue e adaptar)

### Nível 2 (Duração estimada: 20min)

3. Escolha uma estrutura de dados linear (*array list* ou *linked list*) e defina-a em :page_facing_up: `pqueueImplementation.c`.  

4. De acordo com essa estrutura de dados, implemente as função `pqueueCreate`, `pqueueDestroy`, `pqueueSize`, `pqueueIsEmpty` e `pqueueClear`.

    - a função `pqueuePrint` só será implementada no nível 5.

### Nível 3 (Duração estimada: 15min)

No que se refere à manipulação da estrutura de dados para esta implementação, possui duas abordagens:

- **Abordagem A** :blue_square: : Um elemento é adicionado no final da fila; mas, ao retirar um elemento terá de devolver o elemento com maior prioridade que se encontra na fila há mais tempo.

- **Abordagem B** :green_square: : Um elemento é adicionado à fila na sua posição de “prioridade correta”, i.e., ele terá de ficar à frente de todos os elementos existentes com menos prioridade; ao remover da fila, simplesmente remove-se o elemento que está na frente.

Em termos de "dificuldade" de implementação, refira-se o seguinte:

- :blue_square: (mais fácil, mas `pqueuePrint` será mais difícil de implementar)

- :green_square: (mais difícil, mas o `pqueuePrint` será fácil de implementar, i.e., basta seguir a ordem existente)

5. Quais as complexidades esperadas para as abordagens apresentadas (construa uma tabela)? É possível uma implementação *eficiente*, e.g., `O(1)` em todas as operações? Discuta.

### Nível 4 (Duração estimada: 30min)

6. Escolha uma das abordagens apresentadas (qualquer uma serve) e implemente as funções `pqueueEnqueue`, `pqueueDequeue` e `pqueueFront`.

    - Independetemente da abordagem escolhida, terá de fazer uso da função `pqueueElemPriorityValue` para obter o valor de prioridade absoluta de cada elemento.

7. Teste a implementação obtida, compilando o programa (`make`), executando e verifique que os caracteres são removidos da fila pela order esperada (maior prioridade para o caractere `'a'`) - consulte o :page_facing_up: `main_chars.c`.

    - Corrija a implementação, caso seja necessário.

### Nível 5 (Duração estimada: < 20min)

8. Teste o segundo exemplo fornecido (`make clients`). Parameterize `pqueueElem` para `Client` e altere a implementação de `pqueueElemPriorityValue` (basta comentar/descomentar as duas linhas existentes) - consulte o :page_facing_up: `main_clients.c`.

9. Implemente a função `pqueuePrint`. A informação apresentada, deverá mostrar a ordem de saída dos elementos, de acordo com a sua prioridade e ordem de chegada.  

    Se optou por:

    - **Abordagem A** :blue_square: : terá de ser criativo! 

    - **Abordagem B** :green_square: : basta percorrer os elementos pela ordem na estrutura de dados (da frente da fila para a cauda).

---

```markdown
@bruno.silva
(EOF)
``` 
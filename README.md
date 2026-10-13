# Phitron CSE Fundamentals

**Programming Foundations · Problem Solving · Software Development**

A personal learning repository for **Phitron CSE Fundamentals — Batch 10**. This is where I organize my course code, practice solutions, assignments, and projects as I build a foundation in programming and software development.

The learning roadmap connects C/C++, data structures, and algorithms with Python OOP, database design, AI-assisted frontend development, and backend engineering.

[Course Roadmap](#course-roadmap) · [Software Engineering](#software-engineering) · [Projects](#projects) · [Repository Guide](#repository-guide) · [Author](#author)

## Course Roadmap

The following sections outline the course curriculum. Coursework and projects are added as I progress.

| Track | Focus |
| --- | --- |
| **Foundation** | C, C++, data structures, algorithms, and core problem-solving techniques |
| **Competitive Programming** | Advanced algorithms, number theory, data structures, and contest problem solving |
| **Software Development** | Python OOP, databases, frontend and backend development, and practical software engineering |

### 1. Foundation

| Milestone | Topics |
| --- | --- |
| **Programming in C** | Syntax, variables, data types, operators, conditions, loops, arrays, strings, functions, pointers, and recursion |
| **C++ for DSA & Competitive Programming** | Syntax, functions, header files, the string class, dynamic memory allocation, classes, objects, and arrays of objects |
| **Data Structures** | Time and space complexity; linear and binary search; arrays and vectors; two pointers and prefix sums; singly and doubly linked lists; maps and sets; stacks, queues, and priority queues; binary trees, BSTs, heaps, and STL |
| **Algorithms** | Graph fundamentals, BFS, DFS, Dijkstra, Bellman–Ford, Floyd–Warshall, dynamic programming, 2D grids, graph traversal, and disjoint set union |

### 2. Competitive Programming

<details>
<summary><strong>Explore the competitive programming curriculum</strong></summary>

#### Phase 1 — Core Techniques

- **C++ STL:** pairs, tuples, vectors, strings, maps, sets, multisets, priority queues, iterators, and nested structures.
- **Bit manipulation:** bitwise operations and bitmasks.
- **Binary search:** closest values, first and last occurrences, lower bounds, and upper bounds.
- **Two pointers and sliding windows:** fixed-size and variable-size windows.
- **Math and number theory:** divisors, primality testing, GCD, LCM, and basic modular arithmetic.

#### Phase 2 — Advanced Problem Solving

- Monotonic functions and binary search on the answer.
- Difference arrays and policy-based data structures (PBDS).
- Graph and tree problems using BFS and DFS.
- Segment trees, lazy propagation, and disjoint set union (DSU).
- Dynamic programming: Knapsack, longest common subsequence (LCS), and longest increasing subsequence (LIS).
- Number theory: sieves, harmonic series, smallest prime factors, prime factorization, binary exponentiation, Goldbach's conjecture, and Fermat's little theorem.
- String hashing: single, double, and substring hashing.

</details>

### 3. Software Development

#### Python & Object-Oriented Programming

- Python syntax, data types, control flow, loops, lists, and dictionaries.
- File handling, classes, and objects.
- Encapsulation, abstraction, inheritance, and polymorphism.
- OOP practice through restaurant management, school management, and ride-sharing applications.

#### Database Design & Management

- Logical database organization, entity-relationship models, and relational data models.
- Functional dependencies, normal forms, query formulation, and SQL using PostgreSQL or MySQL.
- Database administration, integrity, security, and concurrency control.
- Indexing, data storage and presentation, hashing, and directory systems.

#### AI-Assisted Frontend Development

- Web fundamentals with HTML, CSS, and JavaScript.
- Modern JavaScript and React fundamentals.
- AI-assisted frontend development, including vibe coding.
- Frontend deployment.

#### Backend Development with FastAPI

- API and protocol fundamentals, FastAPI, and CRUD operations.
- Asynchronous programming and database integration.
- Machine learning model integration.
- Advanced FastAPI concepts and middleware.
- JWT authentication, API security, and performance optimization.
- Capstone projects and cloud deployment.

## Software Engineering

The project curriculum extends into architecture, authentication, database concurrency, caching, background processing, automated testing, and deployment.

<details>
<summary><strong>Explore the advanced engineering topics</strong></summary>

### Architecture & Identity

- Modular project structure, dependency injection, and inversion boundaries.
- OpenID Connect (OIDC) token validation with JWKS caching, asymmetric RS256, and refresh token rotation.
- Request context propagation using `X-Request-ID`, `ContextVars`, and structured JSON logging.

### Data Modeling, Concurrency & Atomicity

- SQLAlchemy 2.0 async engines, repositories, and the Unit of Work pattern.
- PostgreSQL transaction advisory locks for issue counters.
- N+1 query optimization and `selectinload` versus `joinedload` benchmarks.
- Soft-delete interceptors and automated JSON-diff audit logging.

### Caching & Reliable Updates

- Redis cache-aside patterns and granular cache invalidation.
- Cache stampede prevention using mutex locks or probabilistic early expiration.
- Idempotency middleware with header tracking, body hashing, and concurrent request locks.
- Hierarchical role-based access control (RBAC) at tenant and project scope.

### Background Jobs & Asynchronous Workflows

- HTTP 202 polling for bulk operations and CSV imports.
- The Transactional Outbox pattern for reliable coordination of database changes and messages.
- Asynchronous workers with ARQ or TaskIQ and task progress reporting.
- Scheduled SLA violation monitoring and cache warming.

### Migrations, Testing & Deployment

- Non-destructive expand/contract database migrations with Alembic.
- Database migration jobs separated from the web deployment lifecycle.
- Pytest and Testcontainers with PostgreSQL and Redis in Docker.
- Multi-stage Docker builds, non-root execution, and distinct liveness and readiness checks.

</details>

## Projects

The following projects are part of the learning roadmap.

| Project | Purpose |
| --- | --- |
| **Jira Clone** | A project management and issue-tracking application for organizing tasks, issues, and workflows |
| **Goodreads Clone** | A book discovery and reader community application with reading activity, books, and reviews |

Python OOP practice also includes **Restaurant Management**, **School Management**, and **Ride Sharing** applications.

Project implementations and their setup instructions will be added as the work develops.

## Repository Guide

- **Course code:** examples organized by course and module.
- **Practice solutions:** exercises grouped with the relevant module or topic.
- **Assignments:** coursework labeled by module and assignment.
- **Projects:** application code with project-specific documentation.

Browse the course folders to explore the available work. Start with [C Programming](./C-Program/).

## Learning Objectives

- Develop clear reasoning and effective problem-solving habits.
- Understand how data structures and algorithms shape program design.
- Apply object-oriented principles and relational database concepts.
- Connect frontend interfaces with secure backend APIs.
- Practice maintainable architecture, automated testing, and deployment.
- Build practical applications while documenting the learning process.

## Author

**Farhan Hasin Sijan**  
[GitHub](https://github.com/Farhan-Sijan) 

---

Curriculum reference: **Phitron CSE Fundamentals, Batch 10**. This is a personal learning repository.

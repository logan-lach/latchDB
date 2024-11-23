LatchDB

LatchDB is an open-source, log based, append only database. 

This is a pet project of mine to work with C++ outside of my normal deskjob and create something of my own.

The goal is to spend 50 hours coding this database. By that time, I want to have

- Core functionallity (Log-based DB with an automatic LSM-tree index on the primary key) 
- Schema support (Set via protobuf)
- Appropriate background processes (Compaction/merging)
- Load testing 

From there, I have a lot of other things I would like to add
- Query parser (Obviously)
- Secondary index support
- Higher SQL support (Join capability, nested queries, etc)
- Failover support (append-only log for in-memory part of the index)
- A CLI
- Much more, just riffing right now. Will revisit as I think of more things


But, the main goal is to get better at C++ outside of work. I work daily with C++ on a nearly finished project.
I've never had the opportunity to see a project being built from the beginning. I look forward to learning

- Newer parts of the c++ language (I use c++11 at work, want to use even more modern c++)
- Project planning and scoping
- Setting up build systems
- Designing and integrating tests with scale

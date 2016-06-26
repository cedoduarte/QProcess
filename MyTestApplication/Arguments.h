/**************************************************************************
** Author: Carlos Enrique Duarte Ortiz
** Company: DuarteCorporation Tutoriales
** WebPage: https://www.youtube.com/c/duartecorporationtutoriales
**
**************************************************************************/
#ifndef ARGUMENTS_H
#define ARGUMENTS_H


class Arguments
{
public:
    Arguments(int argc, char **argv);
    void set_argc(int argc) { m_argc = argc; }
    void set_argv(char **argv) { m_argv = argv; }
    int get_argc() const { return m_argc; }
    char **get_argv() const { return m_argv; }
private:
    int m_argc;
    char **m_argv;
};

#endif // ARGUMENTS_H

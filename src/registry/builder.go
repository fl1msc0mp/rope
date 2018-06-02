package builder

type PkgBuilder struct{}

type Builder interface{
    PkgBuilder() struct

}

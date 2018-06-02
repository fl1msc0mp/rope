use std::fs::File;
use std::path::Path;
use std::error::Error;

pub struct CheckPoint {}

pub struct DB {
    name: String
}    

impl DB {
    pub fn init(name: String) -> DB {
        DB { 
            name
        }   
}
}
